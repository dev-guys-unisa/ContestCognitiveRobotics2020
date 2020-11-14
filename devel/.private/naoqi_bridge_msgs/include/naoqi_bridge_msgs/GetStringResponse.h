// Generated by gencpp from file naoqi_bridge_msgs/GetStringResponse.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_GETSTRINGRESPONSE_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_GETSTRINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct GetStringResponse_
{
  typedef GetStringResponse_<ContainerAllocator> Type;

  GetStringResponse_()
    : data()  {
    }
  GetStringResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStringResponse_

typedef ::naoqi_bridge_msgs::GetStringResponse_<std::allocator<void> > GetStringResponse;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::GetStringResponse > GetStringResponsePtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::GetStringResponse const> GetStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/mivia/ProjectWorkspace/src/naoqi_bridge_msgs/msg', '/home/mivia/ProjectWorkspace/devel/.private/naoqi_bridge_msgs/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x992ce8a1687cec8cULL;
  static const uint64_t static_value2 = 0x8bd883ec73ca41d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/GetStringResponse";
  }

  static const char* value(const ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n\
\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::GetStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_GETSTRINGRESPONSE_H
