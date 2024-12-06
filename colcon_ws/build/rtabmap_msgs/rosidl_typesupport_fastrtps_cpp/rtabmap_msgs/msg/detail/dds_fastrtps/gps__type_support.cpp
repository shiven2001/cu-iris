// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/gps__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_msgs/msg/detail/gps__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
cdr_serialize(
  const rtabmap_msgs::msg::GPS & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  cdr << ros_message.stamp;
  // Member: longitude
  cdr << ros_message.longitude;
  // Member: latitude
  cdr << ros_message.latitude;
  // Member: altitude
  cdr << ros_message.altitude;
  // Member: error
  cdr << ros_message.error;
  // Member: bearing
  cdr << ros_message.bearing;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs::msg::GPS & ros_message)
{
  // Member: stamp
  cdr >> ros_message.stamp;

  // Member: longitude
  cdr >> ros_message.longitude;

  // Member: latitude
  cdr >> ros_message.latitude;

  // Member: altitude
  cdr >> ros_message.altitude;

  // Member: error
  cdr >> ros_message.error;

  // Member: bearing
  cdr >> ros_message.bearing;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
get_serialized_size(
  const rtabmap_msgs::msg::GPS & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp
  {
    size_t item_size = sizeof(ros_message.stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: altitude
  {
    size_t item_size = sizeof(ros_message.altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error
  {
    size_t item_size = sizeof(ros_message.error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearing
  {
    size_t item_size = sizeof(ros_message.bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
max_serialized_size_GPS(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bearing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GPS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::GPS *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GPS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_msgs::msg::GPS *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GPS__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::GPS *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GPS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GPS(full_bounded, 0);
}

static message_type_support_callbacks_t _GPS__callbacks = {
  "rtabmap_msgs::msg",
  "GPS",
  _GPS__cdr_serialize,
  _GPS__cdr_deserialize,
  _GPS__get_serialized_size,
  _GPS__max_serialized_size
};

static rosidl_message_type_support_t _GPS__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GPS__callbacks,
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
get_message_type_support_handle<rtabmap_msgs::msg::GPS>()
{
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_GPS__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_msgs, msg, GPS)() {
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_GPS__handle;
}

#ifdef __cplusplus
}
#endif
