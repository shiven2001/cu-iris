// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/rgbd_image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rgb_camera_info'
// Member 'depth_camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'rgb_compressed'
// Member 'depth_compressed'
#include "sensor_msgs/msg/detail/compressed_image__traits.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::RGBDImage>()
{
  return "rtabmap_msgs::msg::RGBDImage";
}

template<>
inline const char * name<rtabmap_msgs::msg::RGBDImage>()
{
  return "rtabmap_msgs/msg/RGBDImage";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::RGBDImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::RGBDImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::RGBDImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_
