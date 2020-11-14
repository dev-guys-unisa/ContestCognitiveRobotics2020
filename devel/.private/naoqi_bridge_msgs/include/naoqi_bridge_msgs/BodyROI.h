// Generated by gencpp from file naoqi_bridge_msgs/BodyROI.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_BODYROI_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_BODYROI_H


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
struct BodyROI_
{
  typedef BodyROI_<ContainerAllocator> Type;

  BodyROI_()
    : angle(0.0)
    , cx(0.0)
    , cy(0.0)
    , height(0.0)
    , width(0.0)
    , confidence(0.0)  {
    }
  BodyROI_(const ContainerAllocator& _alloc)
    : angle(0.0)
    , cx(0.0)
    , cy(0.0)
    , height(0.0)
    , width(0.0)
    , confidence(0.0)  {
  (void)_alloc;
    }



   typedef float _angle_type;
  _angle_type angle;

   typedef float _cx_type;
  _cx_type cx;

   typedef float _cy_type;
  _cy_type cy;

   typedef float _height_type;
  _height_type height;

   typedef float _width_type;
  _width_type width;

   typedef float _confidence_type;
  _confidence_type confidence;





  typedef boost::shared_ptr< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> const> ConstPtr;

}; // struct BodyROI_

typedef ::naoqi_bridge_msgs::BodyROI_<std::allocator<void> > BodyROI;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::BodyROI > BodyROIPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::BodyROI const> BodyROIConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9f6bf2f53b2585ecc0ff57bd4a21df4";
  }

  static const char* value(const ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9f6bf2f53b2585eULL;
  static const uint64_t static_value2 = 0xcc0ff57bd4a21df4ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/BodyROI";
  }

  static const char* value(const ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 angle\n\
float32 cx\n\
float32 cy\n\
float32 height\n\
float32 width\n\
float32 confidence\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angle);
      stream.next(m.cx);
      stream.next(m.cy);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BodyROI_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::BodyROI_<ContainerAllocator>& v)
  {
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "cx: ";
    Printer<float>::stream(s, indent + "  ", v.cx);
    s << indent << "cy: ";
    Printer<float>::stream(s, indent + "  ", v.cy);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_BODYROI_H
