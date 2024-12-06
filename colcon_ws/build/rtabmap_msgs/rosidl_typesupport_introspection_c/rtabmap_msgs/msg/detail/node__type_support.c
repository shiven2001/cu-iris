// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/node__functions.h"
#include "rtabmap_msgs/msg/detail/node__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `word_id_keys`
// Member `word_id_values`
// Member `word_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/key_point.h"
// Member `word_kpts`
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_introspection_c.h"
// Member `word_pts`
#include "rtabmap_msgs/msg/point3f.h"
// Member `word_pts`
#include "rtabmap_msgs/msg/detail/point3f__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rtabmap_msgs/msg/sensor_data.h"
// Member `data`
#include "rtabmap_msgs/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__Node__init(message_memory);
}

void Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__Node__fini(message_memory);
}

size_t Node__rosidl_typesupport_introspection_c__size_function__KeyPoint__word_kpts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * Node__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__word_kpts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (const rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Node__rosidl_typesupport_introspection_c__get_function__KeyPoint__word_kpts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Node__rosidl_typesupport_introspection_c__resize_function__KeyPoint__word_kpts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__KeyPoint__Sequence * member =
    (rtabmap_msgs__msg__KeyPoint__Sequence *)(untyped_member);
  rtabmap_msgs__msg__KeyPoint__Sequence__fini(member);
  return rtabmap_msgs__msg__KeyPoint__Sequence__init(member, size);
}

size_t Node__rosidl_typesupport_introspection_c__size_function__Point3f__word_pts(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return member->size;
}

const void * Node__rosidl_typesupport_introspection_c__get_const_function__Point3f__word_pts(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__Point3f__Sequence * member =
    (const rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Node__rosidl_typesupport_introspection_c__get_function__Point3f__word_pts(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Node__rosidl_typesupport_introspection_c__resize_function__Point3f__word_pts(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__Point3f__Sequence * member =
    (rtabmap_msgs__msg__Point3f__Sequence *)(untyped_member);
  rtabmap_msgs__msg__Point3f__Sequence__fini(member);
  return rtabmap_msgs__msg__Point3f__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Node__rosidl_typesupport_introspection_c__Node_message_member_array[12] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_id_keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_id_keys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_id_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_id_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_kpts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_kpts),  // bytes offset in struct
    NULL,  // default value
    Node__rosidl_typesupport_introspection_c__size_function__KeyPoint__word_kpts,  // size() function pointer
    Node__rosidl_typesupport_introspection_c__get_const_function__KeyPoint__word_kpts,  // get_const(index) function pointer
    Node__rosidl_typesupport_introspection_c__get_function__KeyPoint__word_kpts,  // get(index) function pointer
    Node__rosidl_typesupport_introspection_c__resize_function__KeyPoint__word_kpts  // resize(index) function pointer
  },
  {
    "word_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_pts),  // bytes offset in struct
    NULL,  // default value
    Node__rosidl_typesupport_introspection_c__size_function__Point3f__word_pts,  // size() function pointer
    Node__rosidl_typesupport_introspection_c__get_const_function__Point3f__word_pts,  // get_const(index) function pointer
    Node__rosidl_typesupport_introspection_c__get_function__Point3f__word_pts,  // get(index) function pointer
    Node__rosidl_typesupport_introspection_c__resize_function__Point3f__word_pts  // resize(index) function pointer
  },
  {
    "word_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, word_descriptors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Node, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "Node",  // message name
  12,  // number of fields
  sizeof(rtabmap_msgs__msg__Node),
  Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Node)() {
  Node__rosidl_typesupport_introspection_c__Node_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  Node__rosidl_typesupport_introspection_c__Node_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, KeyPoint)();
  Node__rosidl_typesupport_introspection_c__Node_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Point3f)();
  Node__rosidl_typesupport_introspection_c__Node_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, SensorData)();
  if (!Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
