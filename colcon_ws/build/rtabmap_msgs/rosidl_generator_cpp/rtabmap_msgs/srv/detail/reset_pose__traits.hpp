// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_

#include "rtabmap_msgs/srv/detail/reset_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::ResetPose_Request>()
{
  return "rtabmap_msgs::srv::ResetPose_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::ResetPose_Request>()
{
  return "rtabmap_msgs/srv/ResetPose_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::ResetPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::ResetPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::ResetPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::ResetPose_Response>()
{
  return "rtabmap_msgs::srv::ResetPose_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::ResetPose_Response>()
{
  return "rtabmap_msgs/srv/ResetPose_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::ResetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::ResetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::ResetPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::ResetPose>()
{
  return "rtabmap_msgs::srv::ResetPose";
}

template<>
inline const char * name<rtabmap_msgs::srv::ResetPose>()
{
  return "rtabmap_msgs/srv/ResetPose";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::ResetPose>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::ResetPose_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::ResetPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::ResetPose>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::ResetPose_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::ResetPose_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::ResetPose>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::ResetPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::ResetPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_
