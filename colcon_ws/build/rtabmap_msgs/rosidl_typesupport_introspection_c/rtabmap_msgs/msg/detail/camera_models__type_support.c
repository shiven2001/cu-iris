// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/camera_models__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/camera_models__functions.h"
#include "rtabmap_msgs/msg/detail/camera_models__struct.h"


// Include directives for member types
// Member `models`
#include "rtabmap_msgs/msg/camera_model.h"
// Member `models`
#include "rtabmap_msgs/msg/detail/camera_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CameraModels__rosidl_typesupport_introspection_c__CameraModels_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__CameraModels__init(message_memory);
}

void CameraModels__rosidl_typesupport_introspection_c__CameraModels_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__CameraModels__fini(message_memory);
}

size_t CameraModels__rosidl_typesupport_introspection_c__size_function__CameraModel__models(
  const void * untyped_member)
{
  const rtabmap_msgs__msg__CameraModel__Sequence * member =
    (const rtabmap_msgs__msg__CameraModel__Sequence *)(untyped_member);
  return member->size;
}

const void * CameraModels__rosidl_typesupport_introspection_c__get_const_function__CameraModel__models(
  const void * untyped_member, size_t index)
{
  const rtabmap_msgs__msg__CameraModel__Sequence * member =
    (const rtabmap_msgs__msg__CameraModel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CameraModels__rosidl_typesupport_introspection_c__get_function__CameraModel__models(
  void * untyped_member, size_t index)
{
  rtabmap_msgs__msg__CameraModel__Sequence * member =
    (rtabmap_msgs__msg__CameraModel__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CameraModels__rosidl_typesupport_introspection_c__resize_function__CameraModel__models(
  void * untyped_member, size_t size)
{
  rtabmap_msgs__msg__CameraModel__Sequence * member =
    (rtabmap_msgs__msg__CameraModel__Sequence *)(untyped_member);
  rtabmap_msgs__msg__CameraModel__Sequence__fini(member);
  return rtabmap_msgs__msg__CameraModel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_member_array[1] = {
  {
    "models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__CameraModels, models),  // bytes offset in struct
    NULL,  // default value
    CameraModels__rosidl_typesupport_introspection_c__size_function__CameraModel__models,  // size() function pointer
    CameraModels__rosidl_typesupport_introspection_c__get_const_function__CameraModel__models,  // get_const(index) function pointer
    CameraModels__rosidl_typesupport_introspection_c__get_function__CameraModel__models,  // get(index) function pointer
    CameraModels__rosidl_typesupport_introspection_c__resize_function__CameraModel__models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "CameraModels",  // message name
  1,  // number of fields
  sizeof(rtabmap_msgs__msg__CameraModels),
  CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_member_array,  // message members
  CameraModels__rosidl_typesupport_introspection_c__CameraModels_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraModels__rosidl_typesupport_introspection_c__CameraModels_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_type_support_handle = {
  0,
  &CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, CameraModels)() {
  CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, CameraModel)();
  if (!CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_type_support_handle.typesupport_identifier) {
    CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CameraModels__rosidl_typesupport_introspection_c__CameraModels_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
