// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/MapGraph.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/map_graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'map_to_odom'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::MapGraph>()
{
  return "rtabmap_msgs::msg::MapGraph";
}

template<>
inline const char * name<rtabmap_msgs::msg::MapGraph>()
{
  return "rtabmap_msgs/msg/MapGraph";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::MapGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::MapGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::MapGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_
