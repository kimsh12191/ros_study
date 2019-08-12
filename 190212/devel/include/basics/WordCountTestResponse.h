// Generated by gencpp from file basics/WordCountTestResponse.msg
// DO NOT EDIT!


#ifndef BASICS_MESSAGE_WORDCOUNTTESTRESPONSE_H
#define BASICS_MESSAGE_WORDCOUNTTESTRESPONSE_H


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
struct WordCountTestResponse_
{
  typedef WordCountTestResponse_<ContainerAllocator> Type;

  WordCountTestResponse_()
    : count(0)  {
    }
  WordCountTestResponse_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef uint32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::basics::WordCountTestResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basics::WordCountTestResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WordCountTestResponse_

typedef ::basics::WordCountTestResponse_<std::allocator<void> > WordCountTestResponse;

typedef boost::shared_ptr< ::basics::WordCountTestResponse > WordCountTestResponsePtr;
typedef boost::shared_ptr< ::basics::WordCountTestResponse const> WordCountTestResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basics::WordCountTestResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basics::WordCountTestResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basics

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basics::WordCountTestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basics::WordCountTestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::WordCountTestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::WordCountTestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::WordCountTestResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::WordCountTestResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basics::WordCountTestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac8b22eb02c1f433e0a55ee9aac59a18";
  }

  static const char* value(const ::basics::WordCountTestResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac8b22eb02c1f433ULL;
  static const uint64_t static_value2 = 0xe0a55ee9aac59a18ULL;
};

template<class ContainerAllocator>
struct DataType< ::basics::WordCountTestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basics/WordCountTestResponse";
  }

  static const char* value(const ::basics::WordCountTestResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basics::WordCountTestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 count\n\
\n\
";
  }

  static const char* value(const ::basics::WordCountTestResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basics::WordCountTestResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WordCountTestResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basics::WordCountTestResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basics::WordCountTestResponse_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASICS_MESSAGE_WORDCOUNTTESTRESPONSE_H