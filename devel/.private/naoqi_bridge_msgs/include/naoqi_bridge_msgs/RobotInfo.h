// Generated by gencpp from file naoqi_bridge_msgs/RobotInfo.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_ROBOTINFO_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_ROBOTINFO_H


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
struct RobotInfo_
{
  typedef RobotInfo_<ContainerAllocator> Type;

  RobotInfo_()
    : type(0)
    , model()
    , head_version()
    , body_version()
    , arm_version()
    , has_laser(false)
    , has_extended_arms(false)
    , number_of_legs(0)
    , number_of_arms(0)
    , number_of_hands(0)  {
    }
  RobotInfo_(const ContainerAllocator& _alloc)
    : type(0)
    , model(_alloc)
    , head_version(_alloc)
    , body_version(_alloc)
    , arm_version(_alloc)
    , has_laser(false)
    , has_extended_arms(false)
    , number_of_legs(0)
    , number_of_arms(0)
    , number_of_hands(0)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_type;
  _model_type model;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _head_version_type;
  _head_version_type head_version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _body_version_type;
  _body_version_type body_version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _arm_version_type;
  _arm_version_type arm_version;

   typedef uint8_t _has_laser_type;
  _has_laser_type has_laser;

   typedef uint8_t _has_extended_arms_type;
  _has_extended_arms_type has_extended_arms;

   typedef int32_t _number_of_legs_type;
  _number_of_legs_type number_of_legs;

   typedef int32_t _number_of_arms_type;
  _number_of_arms_type number_of_arms;

   typedef int32_t _number_of_hands_type;
  _number_of_hands_type number_of_hands;



  enum {
    NAO = 0u,
    ROMEO = 1u,
    PEPPER = 2u,
  };


  typedef boost::shared_ptr< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> const> ConstPtr;

}; // struct RobotInfo_

typedef ::naoqi_bridge_msgs::RobotInfo_<std::allocator<void> > RobotInfo;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::RobotInfo > RobotInfoPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::RobotInfo const> RobotInfoConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc8c56c1600e9f458ce3f2626800e77f";
  }

  static const char* value(const ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc8c56c1600e9f45ULL;
  static const uint64_t static_value2 = 0x8ce3f2626800e77fULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/RobotInfo";
  }

  static const char* value(const ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# info here is inspired by http://doc.aldebaran.com/2-1/naoqi/motion/tools-general-api.html?highlight=getrobotconfig#ALMotionProxy::getRobotConfig\n\
\n\
# enums describing the robot type\n\
uint8 NAO=0\n\
uint8 ROMEO=1\n\
uint8 PEPPER=2\n\
\n\
# one of NAO, ROMEO, PEPPER\n\
uint8 type\n\
\n\
# \"Model Type\"   : \"naoH25\", \"naoH21\", \"naoT14\" or \"naoT2\".\n\
string model\n\
# \"Head Version\" : \"VERSION_32\" or \"VERSION_33\" or \"VERSION_40\".\n\
string head_version\n\
# \"Body Version\" : \"VERSION_32\" or \"VERSION_33\" or \"VERSION_40\".\n\
string body_version\n\
# \"Arm Version\"  : \"VERSION_32\" or \"VERSION_33\" or \"VERSION_40\".\n\
string arm_version\n\
\n\
# \"Laser\"        : True or False.\n\
bool has_laser\n\
# \"Extended Arms\": True or False.\n\
bool has_extended_arms\n\
\n\
# Number of Legs : 0 or 2\n\
int32 number_of_legs\n\
# Number of Arms : 0 or 2\n\
int32 number_of_arms\n\
# Number of Hands: 0 or 2\n\
int32 number_of_hands\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.model);
      stream.next(m.head_version);
      stream.next(m.body_version);
      stream.next(m.arm_version);
      stream.next(m.has_laser);
      stream.next(m.has_extended_arms);
      stream.next(m.number_of_legs);
      stream.next(m.number_of_arms);
      stream.next(m.number_of_hands);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::RobotInfo_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "model: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model);
    s << indent << "head_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.head_version);
    s << indent << "body_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.body_version);
    s << indent << "arm_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arm_version);
    s << indent << "has_laser: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.has_laser);
    s << indent << "has_extended_arms: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.has_extended_arms);
    s << indent << "number_of_legs: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_legs);
    s << indent << "number_of_arms: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_arms);
    s << indent << "number_of_hands: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_hands);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_ROBOTINFO_H
