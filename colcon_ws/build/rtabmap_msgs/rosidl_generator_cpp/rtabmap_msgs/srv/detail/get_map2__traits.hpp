// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/GetMap2.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_

#include "rtabmap_msgs/srv/detail/get_map2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2_Request>()
{
  return "rtabmap_msgs::srv::GetMap2_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2_Request>()
{
  return "rtabmap_msgs/srv/GetMap2_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::GetMap2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "rtabmap_msgs/msg/detail/map_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2_Response>()
{
  return "rtabmap_msgs::srv::GetMap2_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2_Response>()
{
  return "rtabmap_msgs/srv/GetMap2_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2_Response>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::MapData>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2_Response>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::MapData>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::GetMap2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2>()
{
  return "rtabmap_msgs::srv::GetMap2";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2>()
{
  return "rtabmap_msgs/srv/GetMap2";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::GetMap2_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::GetMap2_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::GetMap2_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::GetMap2_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::GetMap2>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::GetMap2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::GetMap2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_
