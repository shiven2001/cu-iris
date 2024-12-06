// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_

#include "rtabmap_msgs/msg/detail/camera_model__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'local_transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::msg::CameraModel>()
{
  return "rtabmap_msgs::msg::CameraModel";
}

template<>
inline const char * name<rtabmap_msgs::msg::CameraModel>()
{
  return "rtabmap_msgs/msg/CameraModel";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::CameraModel>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::CameraModel>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::CameraModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_
