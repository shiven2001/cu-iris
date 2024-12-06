// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/link__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::Link>()
{
  return "rtabmap_msgs::msg::Link";
}

template<>
inline const char * name<rtabmap_msgs::msg::Link>()
{
  return "rtabmap_msgs/msg/Link";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::Link>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::Link>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::Link>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
