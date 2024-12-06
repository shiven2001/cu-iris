// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_

#include "rtabmap_msgs/srv/detail/get_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetPlan_Request>()
{
  return "rtabmap_msgs::srv::GetPlan_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetPlan_Request>()
{
  return "rtabmap_msgs/srv/GetPlan_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::GetPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "rtabmap_msgs/msg/detail/path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetPlan_Response>()
{
  return "rtabmap_msgs::srv::GetPlan_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetPlan_Response>()
{
  return "rtabmap_msgs/srv/GetPlan_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::Path>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::GetPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetPlan>()
{
  return "rtabmap_msgs::srv::GetPlan";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetPlan>()
{
  return "rtabmap_msgs/srv/GetPlan";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::GetPlan_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::GetPlan_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::GetPlan>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::GetPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::GetPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_
