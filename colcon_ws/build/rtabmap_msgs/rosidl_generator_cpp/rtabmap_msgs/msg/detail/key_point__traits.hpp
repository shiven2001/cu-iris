// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pt'
#include "rtabmap_msgs/msg/detail/point2f__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::KeyPoint>()
{
  return "rtabmap_msgs::msg::KeyPoint";
}

template<>
inline const char * name<rtabmap_msgs::msg::KeyPoint>()
{
  return "rtabmap_msgs/msg/KeyPoint";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::KeyPoint>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::Point2f>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::KeyPoint>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::Point2f>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::KeyPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
