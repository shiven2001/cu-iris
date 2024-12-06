// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/scan_descriptor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__traits.hpp"
// Member 'scan_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::ScanDescriptor>()
{
  return "rtabmap_msgs::msg::ScanDescriptor";
}

template<>
inline const char * name<rtabmap_msgs::msg::ScanDescriptor>()
{
  return "rtabmap_msgs/msg/ScanDescriptor";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::ScanDescriptor>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::GlobalDescriptor>::value && has_fixed_size<sensor_msgs::msg::LaserScan>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::ScanDescriptor>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::GlobalDescriptor>::value && has_bounded_size<sensor_msgs::msg::LaserScan>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::ScanDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_
