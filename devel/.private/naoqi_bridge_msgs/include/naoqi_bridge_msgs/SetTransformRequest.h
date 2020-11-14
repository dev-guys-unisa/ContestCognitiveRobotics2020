// Generated by gencpp from file naoqi_bridge_msgs/SetTransformRequest.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_SETTRANSFORMREQUEST_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_SETTRANSFORMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct SetTransformRequest_
{
  typedef SetTransformRequest_<ContainerAllocator> Type;

  SetTransformRequest_()
    : offset()  {
    }
  SetTransformRequest_(const ContainerAllocator& _alloc)
    : offset(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _offset_type;
  _offset_type offset;





  typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetTransformRequest_

typedef ::naoqi_bridge_msgs::SetTransformRequest_<std::allocator<void> > SetTransformRequest;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetTransformRequest > SetTransformRequestPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetTransformRequest const> SetTransformRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/mivia/ProjectWorkspace/src/naoqi_bridge_msgs/msg', '/home/mivia/ProjectWorkspace/devel/.private/naoqi_bridge_msgs/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67035ddf415a9bb64191f0e45b060e35";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67035ddf415a9bb6ULL;
  static const uint64_t static_value2 = 0x4191f0e45b060e35ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/SetTransformRequest";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/Transform offset\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTransformRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::SetTransformRequest_<ContainerAllocator>& v)
  {
    s << indent << "offset: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_SETTRANSFORMREQUEST_H
