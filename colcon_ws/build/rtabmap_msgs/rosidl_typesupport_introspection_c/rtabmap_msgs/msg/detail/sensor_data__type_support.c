// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/sensor_data__functions.h"
#include "rtabmap_msgs/msg/detail/sensor_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `left`
// Member `right`
#include "sensor_msgs/msg/image.h"
// Member `left`
// Member `right`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `left_compressed`
// Member `right_compressed`
// Member `laser_scan_compressed`
// Member `user_data`
// Member `grid_ground`
// Member `grid_obstacles`
// Member `grid_empty_cells`
// Member `descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `left_camera_info`
// Member `right_camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `left_camera_info`
// Member `right_camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
// Member `imu_local_transform`
#include "geometry_msgs/msg/transform.h"
// Member `local_transform`
// Member `laser_scan_local_transform`
// Member `imu_local_transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `laser_scan`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `laser_scan`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `grid_view_point`
// Member `points`
#include "rtabmap_msgs/msg/point3f.h"
// Member `grid_view_point`
// Member `points`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `key_points`
#include "rtabmap_msgs/msg/key_point.h"
// Member `key_points`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/global_descriptor.h"
// Member `global_descriptors`
#include "rtabmap_msgs/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/env_sensor.h"
// Member `env_sensors`
#include "rtabmap_msgs/msg/detail/env_sensor__rosidl_typesupport_introspection_c.h"
// Member `imu`
#include "sensor_msgs/msg/imu.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `landmarks`
#include "rtabmap_msgs/msg/landmark_detection.h"
// Member `landmarks`
#include "rtabmap_msgs/msg/detail/landmark_detection__rosidl_typesupport_introspection_c.h"
// Member `ground_truth_pose`
#include "geometry_msgs/msg/pose.h"
// Member `ground_truth_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `gps`
#include "rtabmap_msgs/msg/gps.h"
// Member `gps`
#include "rtabmap_msgs/msg/detail/gps__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorData__rosidl_typesupport_introspection_c__SensorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__SensorData__init(message_memory);
}

void SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__SensorData__fini(message_memory);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__CameraInfo__left_camera_info(
  const void * untyped_member)
{
  const sensor_msgs__msg__CameraInfo__Sequence * member =
    (const sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__CameraInfo__left_camera_info(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__CameraInfo__Sequence * member =
    (const sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__CameraInfo__left_camera_info(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__CameraInfo__Sequence * member =
    (sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__CameraInfo__left_camera_info(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__CameraInfo__Sequence * member =
    (sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  sensor_msgs__msg__CameraInfo__Sequence__fini(member);
  return sensor_msgs__msg__CameraInfo__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__CameraInfo__right_camera_info(
  const void * untyped_member)
{
  const sensor_msgs__msg__CameraInfo__Sequence * member =
    (const sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__CameraInfo__right_camera_info(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__CameraInfo__Sequence * member =
    (const sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__CameraInfo__right_camera_info(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__CameraInfo__Sequence * member =
    (sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__CameraInfo__right_camera_info(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__CameraInfo__Sequence * member =
    (sensor_msgs__msg__CameraInfo__Sequence *)(untyped_member);
  sensor_msgs__msg__CameraInfo__Sequence__fini(member);
  return sensor_msgs__msg__CameraInfo__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__Transform__local_transform(
  const void * untyped_member)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__Transform__local_transform(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Transform__Sequence * member =
    (const geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__Transform__local_transform(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__Transform__local_transform(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Transform__Sequence * member =
    (geometry_msgs__msg__Transform__Sequence *)(untyped_member);
  geometry_msgs__msg__Transform__Sequence__fini(member);
  return geometry_msgs__msg__Transform__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__KeyPoint__key_points(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__key_points(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__KeyPoint__key_points(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__KeyPoint__key_points(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__Point3f__points(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__Point3f__points(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__Point3f__points(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__Point3f__points(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__global_descriptors(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (const rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__global_descriptors(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (const rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__global_descriptors(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__global_descriptors(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__GlobalDescriptor__Sequence * member =
    (rtabmap_msgs__msg__GlobalDescriptor__Sequence *)(untyped_member);
  rtabmap_msgs__msg__GlobalDescriptor__Sequence__fini(member);
  return rtabmap_msgs__msg__GlobalDescriptor__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__EnvSensor__env_sensors(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (const rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__EnvSensor__env_sensors(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (const rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__EnvSensor__env_sensors(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__EnvSensor__env_sensors(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__EnvSensor__Sequence * member =
    (rtabmap_msgs__msg__EnvSensor__Sequence *)(untyped_member);
  rtabmap_msgs__msg__EnvSensor__Sequence__fini(member);
  return rtabmap_msgs__msg__EnvSensor__Sequence__init(member, size);
}

size_t SensorData__rosidl_typesupport_introspection_c__size_function__LandmarkDetection__landmarks(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (const rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * SensorData__rosidl_typesupport_introspection_c__get_const_function__LandmarkDetection__landmarks(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (const rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SensorData__rosidl_typesupport_introspection_c__get_function__LandmarkDetection__landmarks(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SensorData__rosidl_typesupport_introspection_c__resize_function__LandmarkDetection__landmarks(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  rtabmap_msgs__msg__LandmarkDetection__Sequence__fini(member);
  return rtabmap_msgs__msg__LandmarkDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[30] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, left_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, right_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, left_camera_info),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__CameraInfo__left_camera_info,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__CameraInfo__left_camera_info,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__CameraInfo__left_camera_info,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__CameraInfo__left_camera_info  // resize(index) function pointer
  },
  {
    "right_camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, right_camera_info),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__CameraInfo__right_camera_info,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__CameraInfo__right_camera_info,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__CameraInfo__right_camera_info,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__CameraInfo__right_camera_info  // resize(index) function pointer
  },
  {
    "local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, local_transform),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__Transform__local_transform,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__Transform__local_transform,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__Transform__local_transform,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__Transform__local_transform  // resize(index) function pointer
  },
  {
    "laser_scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_compressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan_compressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_max_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan_max_pts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_max_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan_max_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_scan_local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, laser_scan_local_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, user_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_ground",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, grid_ground),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, grid_obstacles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_empty_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, grid_empty_cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_cell_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, grid_cell_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_view_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, grid_view_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, key_points),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__KeyPoint__key_points,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__key_points,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__KeyPoint__key_points,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__KeyPoint__key_points  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, points),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__Point3f__points,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__Point3f__points,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__Point3f__points,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__Point3f__points  // resize(index) function pointer
  },
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, descriptors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, global_descriptors),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__global_descriptors,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__global_descriptors,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__global_descriptors,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__global_descriptors  // resize(index) function pointer
  },
  {
    "env_sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, env_sensors),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__EnvSensor__env_sensors,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__EnvSensor__env_sensors,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__EnvSensor__env_sensors,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__EnvSensor__env_sensors  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_local_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, imu_local_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, landmarks),  // bytes offset in struct
    NULL,  // default value
    SensorData__rosidl_typesupport_introspection_c__size_function__LandmarkDetection__landmarks,  // size() function pointer
    SensorData__rosidl_typesupport_introspection_c__get_const_function__LandmarkDetection__landmarks,  // get_const(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__get_function__LandmarkDetection__landmarks,  // get(index) function pointer
    SensorData__rosidl_typesupport_introspection_c__resize_function__LandmarkDetection__landmarks  // resize(index) function pointer
  },
  {
    "ground_truth_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, ground_truth_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__SensorData, gps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorData__rosidl_typesupport_introspection_c__SensorData_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "SensorData",  // message name
  30,  // number of fields
  sizeof(rtabmap_msgs__msg__SensorData),
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array,  // message members
  SensorData__rosidl_typesupport_introspection_c__SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle = {
  0,
  &SensorData__rosidl_typesupport_introspection_c__SensorData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, SensorData)() {
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GlobalDescriptor)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, EnvSensor)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Imu)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, LandmarkDetection)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, GPS)();
  if (!SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier) {
    SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
