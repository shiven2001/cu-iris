// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rtabmap_msgs/msg/detail/key_point__struct.h"
#include "rtabmap_msgs/msg/detail/key_point__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rtabmap_msgs/msg/detail/point2f__functions.h"  // pt

// forward declare type support functions
size_t get_serialized_size_rtabmap_msgs__msg__Point2f(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rtabmap_msgs__msg__Point2f(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point2f)();


using _KeyPoint__ros_msg_type = rtabmap_msgs__msg__KeyPoint;

static bool _KeyPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KeyPoint__ros_msg_type * ros_message = static_cast<const _KeyPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point2f
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pt, cdr))
    {
      return false;
    }
  }

  // Field name: size
  {
    cdr << ros_message->size;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  // Field name: response
  {
    cdr << ros_message->response;
  }

  // Field name: octave
  {
    cdr << ros_message->octave;
  }

  // Field name: class_id
  {
    cdr << ros_message->class_id;
  }

  return true;
}

static bool _KeyPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KeyPoint__ros_msg_type * ros_message = static_cast<_KeyPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, Point2f
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pt))
    {
      return false;
    }
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  // Field name: response
  {
    cdr >> ros_message->response;
  }

  // Field name: octave
  {
    cdr >> ros_message->octave;
  }

  // Field name: class_id
  {
    cdr >> ros_message->class_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t get_serialized_size_rtabmap_msgs__msg__KeyPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KeyPoint__ros_msg_type * ros_message = static_cast<const _KeyPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pt

  current_alignment += get_serialized_size_rtabmap_msgs__msg__Point2f(
    &(ros_message->pt), current_alignment);
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name response
  {
    size_t item_size = sizeof(ros_message->response);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name octave
  {
    size_t item_size = sizeof(ros_message->octave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name class_id
  {
    size_t item_size = sizeof(ros_message->class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KeyPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rtabmap_msgs__msg__KeyPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rtabmap_msgs
size_t max_serialized_size_rtabmap_msgs__msg__KeyPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__Point2f(
        full_bounded, current_alignment);
    }
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: response
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: octave
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: class_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _KeyPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rtabmap_msgs__msg__KeyPoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_KeyPoint = {
  "rtabmap_msgs::msg",
  "KeyPoint",
  _KeyPoint__cdr_serialize,
  _KeyPoint__cdr_deserialize,
  _KeyPoint__get_serialized_size,
  _KeyPoint__max_serialized_size
};

static rosidl_message_type_support_t _KeyPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KeyPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, KeyPoint)() {
  return &_KeyPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
