// Generated by gencpp from file naoqi_bridge_msgs/CmdVelService.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_CMDVELSERVICE_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_CMDVELSERVICE_H

#include <ros/service_traits.h>


#include <naoqi_bridge_msgs/CmdVelServiceRequest.h>
#include <naoqi_bridge_msgs/CmdVelServiceResponse.h>


namespace naoqi_bridge_msgs
{

struct CmdVelService
{

typedef CmdVelServiceRequest Request;
typedef CmdVelServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CmdVelService
} // namespace naoqi_bridge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::naoqi_bridge_msgs::CmdVelService > {
  static const char* value()
  {
    return "a787b2802160dcc7fe02d089e10afe56";
  }

  static const char* value(const ::naoqi_bridge_msgs::CmdVelService&) { return value(); }
};

template<>
struct DataType< ::naoqi_bridge_msgs::CmdVelService > {
  static const char* value()
  {
    return "naoqi_bridge_msgs/CmdVelService";
  }

  static const char* value(const ::naoqi_bridge_msgs::CmdVelService&) { return value(); }
};


// service_traits::MD5Sum< ::naoqi_bridge_msgs::CmdVelServiceRequest> should match 
// service_traits::MD5Sum< ::naoqi_bridge_msgs::CmdVelService > 
template<>
struct MD5Sum< ::naoqi_bridge_msgs::CmdVelServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::naoqi_bridge_msgs::CmdVelService >::value();
  }
  static const char* value(const ::naoqi_bridge_msgs::CmdVelServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::naoqi_bridge_msgs::CmdVelServiceRequest> should match 
// service_traits::DataType< ::naoqi_bridge_msgs::CmdVelService > 
template<>
struct DataType< ::naoqi_bridge_msgs::CmdVelServiceRequest>
{
  static const char* value()
  {
    return DataType< ::naoqi_bridge_msgs::CmdVelService >::value();
  }
  static const char* value(const ::naoqi_bridge_msgs::CmdVelServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::naoqi_bridge_msgs::CmdVelServiceResponse> should match 
// service_traits::MD5Sum< ::naoqi_bridge_msgs::CmdVelService > 
template<>
struct MD5Sum< ::naoqi_bridge_msgs::CmdVelServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::naoqi_bridge_msgs::CmdVelService >::value();
  }
  static const char* value(const ::naoqi_bridge_msgs::CmdVelServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::naoqi_bridge_msgs::CmdVelServiceResponse> should match 
// service_traits::DataType< ::naoqi_bridge_msgs::CmdVelService > 
template<>
struct DataType< ::naoqi_bridge_msgs::CmdVelServiceResponse>
{
  static const char* value()
  {
    return DataType< ::naoqi_bridge_msgs::CmdVelService >::value();
  }
  static const char* value(const ::naoqi_bridge_msgs::CmdVelServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_CMDVELSERVICE_H
