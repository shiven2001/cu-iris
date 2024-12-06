// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/key_point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace rtabmap_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rtabmap_msgs::msg::Point2f &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rtabmap_msgs::msg::Point2f &);
size_t get_serialized_size(
  const rtabmap_msgs::msg::Point2f &,
  size_t current_alignment);
size_t
max_serialized_size_Point2f(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
cdr_serialize(
  const rtabmap_msgs::msg::KeyPoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pt
  rtabmap_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pt,
    cdr);
  // Member: size
  cdr << ros_message.size;
  // Member: angle
  cdr << ros_message.angle;
  // Member: response
  cdr << ros_message.response;
  // Member: octave
  cdr << ros_message.octave;
  // Member: class_id
  cdr << ros_message.class_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs::msg::KeyPoint & ros_message)
{
  // Member: pt
  rtabmap_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pt);

  // Member: size
  cdr >> ros_message.size;

  // Member: angle
  cdr >> ros_message.angle;

  // Member: response
  cdr >> ros_message.response;

  // Member: octave
  cdr >> ros_message.octave;

  // Member: class_id
  cdr >> ros_message.class_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
get_serialized_size(
  const rtabmap_msgs::msg::KeyPoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pt

  current_alignment +=
    rtabmap_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pt, current_alignment);
  // Member: size
  {
    size_t item_size = sizeof(ros_message.size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle
  {
    size_t item_size = sizeof(ros_message.angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: response
  {
    size_t item_size = sizeof(ros_message.response);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: octave
  {
    size_t item_size = sizeof(ros_message.octave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: class_id
  {
    size_t item_size = sizeof(ros_message.class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
max_serialized_size_KeyPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rtabmap_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2f(
        full_bounded, current_alignment);
    }
  }

  // Member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: response
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: octave
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: class_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _KeyPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::KeyPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KeyPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_msgs::msg::KeyPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KeyPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::KeyPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KeyPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_KeyPoint(full_bounded, 0);
}

static message_type_support_callbacks_t _KeyPoint__callbacks = {
  "rtabmap_msgs::msg",
  "KeyPoint",
  _KeyPoint__cdr_serialize,
  _KeyPoint__cdr_deserialize,
  _KeyPoint__get_serialized_size,
  _KeyPoint__max_serialized_size
};

static rosidl_message_type_support_t _KeyPoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KeyPoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rtabmap_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rtabmap_msgs::msg::KeyPoint>()
{
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_KeyPoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_msgs, msg, KeyPoint)() {
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_KeyPoint__handle;
}

#ifdef __cplusplus
}
#endif
