// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/LandmarkDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/landmark_detections__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/landmark_detections__functions.h"
#include "rtabmap_msgs/msg/detail/landmark_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `landmarks`
#include "rtabmap_msgs/msg/landmark_detection.h"
// Member `landmarks`
#include "rtabmap_msgs/msg/detail/landmark_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__LandmarkDetections__init(message_memory);
}

void LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__LandmarkDetections__fini(message_memory);
}

size_t LandmarkDetections__rosidl_typesupport_introspection_c__size_function__LandmarkDetection__landmarks(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (const rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * LandmarkDetections__rosidl_typesupport_introspection_c__get_const_function__LandmarkDetection__landmarks(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (const rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LandmarkDetections__rosidl_typesupport_introspection_c__get_function__LandmarkDetection__landmarks(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LandmarkDetections__rosidl_typesupport_introspection_c__resize_function__LandmarkDetection__landmarks(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__LandmarkDetection__Sequence * member =
    (rtabmap_msgs__msg__LandmarkDetection__Sequence *)(untyped_member);
  rtabmap_msgs__msg__LandmarkDetection__Sequence__fini(member);
  return rtabmap_msgs__msg__LandmarkDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__LandmarkDetections, header),  // bytes offset in struct
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
    offsetof(rtabmap_msgs__msg__LandmarkDetections, landmarks),  // bytes offset in struct
    NULL,  // default value
    LandmarkDetections__rosidl_typesupport_introspection_c__size_function__LandmarkDetection__landmarks,  // size() function pointer
    LandmarkDetections__rosidl_typesupport_introspection_c__get_const_function__LandmarkDetection__landmarks,  // get_const(index) function pointer
    LandmarkDetections__rosidl_typesupport_introspection_c__get_function__LandmarkDetection__landmarks,  // get(index) function pointer
    LandmarkDetections__rosidl_typesupport_introspection_c__resize_function__LandmarkDetection__landmarks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "LandmarkDetections",  // message name
  2,  // number of fields
  sizeof(rtabmap_msgs__msg__LandmarkDetections),
  LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_member_array,  // message members
  LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_type_support_handle = {
  0,
  &LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, LandmarkDetections)() {
  LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, LandmarkDetection)();
  if (!LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_type_support_handle.typesupport_identifier) {
    LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LandmarkDetections__rosidl_typesupport_introspection_c__LandmarkDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif