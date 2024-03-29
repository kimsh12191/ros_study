// Generated by gencpp from file basics/TimerGoal.msg
// DO NOT EDIT!


#ifndef BASICS_MESSAGE_TIMERGOAL_H
#define BASICS_MESSAGE_TIMERGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace basics
{
template <class ContainerAllocator>
struct TimerGoal_
{
  typedef TimerGoal_<ContainerAllocator> Type;

  TimerGoal_()
    : time_to_wait()  {
    }
  TimerGoal_(const ContainerAllocator& _alloc)
    : time_to_wait()  {
  (void)_alloc;
    }



   typedef ros::Duration _time_to_wait_type;
  _time_to_wait_type time_to_wait;





  typedef boost::shared_ptr< ::basics::TimerGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basics::TimerGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TimerGoal_

typedef ::basics::TimerGoal_<std::allocator<void> > TimerGoal;

typedef boost::shared_ptr< ::basics::TimerGoal > TimerGoalPtr;
typedef boost::shared_ptr< ::basics::TimerGoal const> TimerGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basics::TimerGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basics::TimerGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basics

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'basics': ['/home/suhyun/rosdir/190212/devel/share/basics/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basics::TimerGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basics::TimerGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::TimerGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::TimerGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::TimerGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::TimerGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basics::TimerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "861563d4afc38bffed1a53c61a474261";
  }

  static const char* value(const ::basics::TimerGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x861563d4afc38bffULL;
  static const uint64_t static_value2 = 0xed1a53c61a474261ULL;
};

template<class ContainerAllocator>
struct DataType< ::basics::TimerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basics/TimerGoal";
  }

  static const char* value(const ::basics::TimerGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basics::TimerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# 영역1. 목표에대한것, 클라이언트에서 보냄\n\
# 대기하기 원하는 시간\n\
duration time_to_wait\n\
";
  }

  static const char* value(const ::basics::TimerGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basics::TimerGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_to_wait);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimerGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basics::TimerGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basics::TimerGoal_<ContainerAllocator>& v)
  {
    s << indent << "time_to_wait: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_to_wait);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASICS_MESSAGE_TIMERGOAL_H
