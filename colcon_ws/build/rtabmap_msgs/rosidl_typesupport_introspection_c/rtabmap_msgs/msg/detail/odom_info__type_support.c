// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/odom_info__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/odom_info__functions.h"
#include "rtabmap_msgs/msg/detail/odom_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `local_bundle_ids`
// Member `words_keys`
// Member `word_matches`
// Member `word_inliers`
// Member `local_map_keys`
// Member `corner_inliers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `local_bundle_models`
#include "rtabmap_msgs/msg/camera_models.h"
// Member `local_bundle_models`
#include "rtabmap_msgs/msg/detail/camera_models__rosidl_typesupport_introspection_c.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/pose.h"
// Member `local_bundle_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
// Member `transform_filtered`
// Member `transform_ground_truth`
// Member `guess`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `words_values`
#include "rtabmap_msgs/msg/key_point.h"
// Member `words_values`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `local_map_values`
#include "rtabmap_msgs/msg/point3f.h"
// Member `local_map_values`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `local_scan_map`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_msgs/msg/point2f.h"
// Member `ref_corners`
// Member `new_corners`
#include "rtabmap_msgs/msg/detail/point2f__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__OdomInfo__init(message_memory);
}

void OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__OdomInfo__fini(message_memory);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__CameraModels__local_bundle_models(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__CameraModels__Sequence * member =
    (const rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__CameraModels__local_bundle_models(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__CameraModels__Sequence * member =
    (const rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__CameraModels__local_bundle_models(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__CameraModels__Sequence * member =
    (rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__CameraModels__local_bundle_models(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__CameraModels__Sequence * member =
    (rtabmap_msgs__msg__CameraModels__Sequence *)(untyped_member);
  rtabmap_msgs__msg__CameraModels__Sequence__fini(member);
  return rtabmap_msgs__msg__CameraModels__Sequence__init(member, size);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__Pose__local_bundle_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Pose__local_bundle_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__Pose__local_bundle_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__Pose__local_bundle_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__KeyPoint__words_values(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__words_values(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__KeyPoint__words_values(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__KeyPoint__words_values(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__Point3f__local_map_values(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point3f__local_map_values(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__Point3f__local_map_values(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point3f__local_map_values(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__Point2f__ref_corners(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point2f__ref_corners(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__Point2f__ref_corners(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point2f__ref_corners(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point2f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point2f__Sequence__init(member, size);
}

size_t OdomInfo__rosidl_typesupport_introspection_c__size_function__Point2f__new_corners(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return member->size;
}

const void * OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point2f__new_corners(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point2f__Sequence * member =
    (const rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OdomInfo__rosidl_typesupport_introspection_c__get_function__Point2f__new_corners(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point2f__new_corners(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point2f__Sequence * member =
    (rtabmap_msgs__msg__Point2f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point2f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point2f__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[45] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, inliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_inliers_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_inliers_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_structural_complexity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_structural_complexity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_structural_distribution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_structural_distribution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_correspondences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, icp_correspondences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, features),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_map_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_scan_map_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_scan_map_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_key_frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_key_frames),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_outliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_outliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_frame_added",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, key_frame_added),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_estimation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, time_estimation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_particle_filtering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, time_particle_filtering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_travelled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, distance_travelled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "memory_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, memory_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_roll_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, gravity_roll_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_pitch_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, gravity_pitch_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_bundle_models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_models),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__CameraModels__local_bundle_models,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__CameraModels__local_bundle_models,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__CameraModels__local_bundle_models,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__CameraModels__local_bundle_models  // resize(index) function pointer
  },
  {
    "local_bundle_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_bundle_poses),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__Pose__local_bundle_poses,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Pose__local_bundle_poses,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__Pose__local_bundle_poses,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__Pose__local_bundle_poses  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform_filtered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform_ground_truth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, transform_ground_truth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, guess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "words_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, words_keys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "words_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, words_values),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__KeyPoint__words_values,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__words_values,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__KeyPoint__words_values,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__KeyPoint__words_values  // resize(index) function pointer
  },
  {
    "word_matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, word_matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, word_inliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_map_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_keys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_map_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_map_values),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__Point3f__local_map_values,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point3f__local_map_values,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__Point3f__local_map_values,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point3f__local_map_values  // resize(index) function pointer
  },
  {
    "local_scan_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, local_scan_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, ref_corners),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__Point2f__ref_corners,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point2f__ref_corners,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__Point2f__ref_corners,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point2f__ref_corners  // resize(index) function pointer
  },
  {
    "new_corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, new_corners),  // bytes offset in struct
    NULL,  // default value
    OdomInfo__rosidl_typesupport_introspection_c__size_function__Point2f__new_corners,  // size() function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_const_function__Point2f__new_corners,  // get_const(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__get_function__Point2f__new_corners,  // get(index) function pointer
    OdomInfo__rosidl_typesupport_introspection_c__resize_function__Point2f__new_corners  // resize(index) function pointer
  },
  {
    "corner_inliers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__OdomInfo, corner_inliers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "OdomInfo",  // message name
  45,  // number of fields
  sizeof(rtabmap_msgs__msg__OdomInfo),
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array,  // message members
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle = {
  0,
  &OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, OdomInfo)() {
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, CameraModels)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[32].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[33].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[36].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[40].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[41].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[42].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point2f)();
  OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_member_array[43].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point2f)();
  if (!OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle.typesupport_identifier) {
    OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OdomInfo__rosidl_typesupport_introspection_c__OdomInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
