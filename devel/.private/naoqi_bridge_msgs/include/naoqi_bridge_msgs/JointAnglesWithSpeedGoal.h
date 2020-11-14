// Generated by gencpp from file naoqi_bridge_msgs/JointAnglesWithSpeedGoal.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDGOAL_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <naoqi_bridge_msgs/JointAnglesWithSpeed.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct JointAnglesWithSpeedGoal_
{
  typedef JointAnglesWithSpeedGoal_<ContainerAllocator> Type;

  JointAnglesWithSpeedGoal_()
    : joint_angles()  {
    }
  JointAnglesWithSpeedGoal_(const ContainerAllocator& _alloc)
    : joint_angles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::naoqi_bridge_msgs::JointAnglesWithSpeed_<ContainerAllocator>  _joint_angles_type;
  _joint_angles_type joint_angles;





  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> const> ConstPtr;

}; // struct JointAnglesWithSpeedGoal_

typedef ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<std::allocator<void> > JointAnglesWithSpeedGoal;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal > JointAnglesWithSpeedGoalPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal const> JointAnglesWithSpeedGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d19a898a40aae87b37b0f91c9e90f46c";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd19a898a40aae87bULL;
  static const uint64_t static_value2 = 0x37b0f91c9e90f46cULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/JointAnglesWithSpeedGoal";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal: a registered body pose name\n\
naoqi_bridge_msgs/JointAnglesWithSpeed joint_angles\n\
\n\
================================================================================\n\
MSG: naoqi_bridge_msgs/JointAnglesWithSpeed\n\
Header header\n\
\n\
# A list of joint names, corresponding to their names in the Nao docs.\n\
# This must either have the same length as joint_angles or \n\
# length 1 if it's a keyword such as 'Body' (for all angles)\n\
string[] joint_names\n\
float32[] joint_angles\n\
\n\
# fraction of max joint velocity [0:1]\n\
float32 speed\n\
\n\
# Absolute angle (=0, default) or relative change\n\
uint8 relative\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_angles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointAnglesWithSpeedGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::JointAnglesWithSpeedGoal_<ContainerAllocator>& v)
  {
    s << indent << "joint_angles: ";
    s << std::endl;
    Printer< ::naoqi_bridge_msgs::JointAnglesWithSpeed_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_angles);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_JOINTANGLESWITHSPEEDGOAL_H
