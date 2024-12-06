// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rtabmap_msgs:msg/CameraModels.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/msg/detail/camera_models__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rtabmap_msgs/msg/detail/camera_models__struct.hpp"

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
  const rtabmap_msgs::msg::CameraModel &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rtabmap_msgs::msg::CameraModel &);
size_t get_serialized_size(
  const rtabmap_msgs::msg::CameraModel &,
  size_t current_alignment);
size_t
max_serialized_size_CameraModel(
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
  const rtabmap_msgs::msg::CameraModels & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: models
  {
    size_t size = ros_message.models.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rtabmap_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.models[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtabmap_msgs::msg::CameraModels & ros_message)
{
  // Member: models
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.models.resize(size);
    for (size_t i = 0; i < size; i++) {
      rtabmap_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.models[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
get_serialized_size(
  const rtabmap_msgs::msg::CameraModels & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: models
  {
    size_t array_size = ros_message.models.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rtabmap_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.models[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtabmap_msgs
max_serialized_size_CameraModels(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: models
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rtabmap_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CameraModel(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CameraModels__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::CameraModels *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraModels__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rtabmap_msgs::msg::CameraModels *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraModels__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rtabmap_msgs::msg::CameraModels *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraModels__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CameraModels(full_bounded, 0);
}

static message_type_support_callbacks_t _CameraModels__callbacks = {
  "rtabmap_msgs::msg",
  "CameraModels",
  _CameraModels__cdr_serialize,
  _CameraModels__cdr_deserialize,
  _CameraModels__get_serialized_size,
  _CameraModels__max_serialized_size
};

static rosidl_message_type_support_t _CameraModels__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CameraModels__callbacks,
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
get_message_type_support_handle<rtabmap_msgs::msg::CameraModels>()
{
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_CameraModels__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtabmap_msgs, msg, CameraModels)() {
  return &rtabmap_msgs::msg::typesupport_fastrtps_cpp::_CameraModels__handle;
}

#ifdef __cplusplus
}
#endif
