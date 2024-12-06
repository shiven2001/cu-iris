// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/Point3f.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::Point3f>()
{
  return "rtabmap_msgs::msg::Point3f";
}

template<>
inline const char * name<rtabmap_msgs::msg::Point3f>()
{
  return "rtabmap_msgs/msg/Point3f";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::Point3f>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::Point3f>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::msg::Point3f>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_
