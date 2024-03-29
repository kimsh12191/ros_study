#! /usr/bin/env python
import rospy

import time
import actionlib
from basics.msg import TimerAction, TimerGoal, TimerResult, TimerFeedback

def do_timer(goal):
    start_time = time.time()
    update_count = 0
    if goal.time_to_wait.to_sec() > 20.0:
        result = TimerResult()
        result.time_elapsed = rospy.Duration.from_sec(time.time()-start_time)
        result.updates_sent = update_count
        server.set_aborted(result, "Time too long to wait")

    while (time.time() - start_time) < goal.time_to_wait.to_sec():
        if server.is_preempt_requested():
            result = TimerResult()
            result.time_elapsed =\
                rospy.Duration.from_sec(time.time()-start_time)
            result.updates_sent = update_count
            server.set_preempted(result, "Timer preempted")
            return
        feedback = TimerFeedback()
        feedback.time_elapsed = rospy.Duration.from_sec(time.time()-start_time)
        feedback.time_remaining = goal.time_to_wait - feedback.time_elapsed
        server.publish_feedback(feedback)
        update_count += 1

        time.sleep(1.0)


    result = TimerResult()
    result.time_elapsed = rospy.Duration.from_sec(time.time()-start_time)
    result.updates_sent = 0
    server.set_succeeded(result)

rospy.init_node('timer_action_server')
print ("init action server")
server = actionlib.SimpleActionServer('timer', TimerAction, do_timer, False)
server.start()
rospy.spin()
