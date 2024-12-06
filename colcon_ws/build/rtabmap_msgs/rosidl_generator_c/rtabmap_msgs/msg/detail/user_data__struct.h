// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:msg/UserData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__USER_DATA__STRUCT_H_
#define RTABMAP_MSGS__MSG__DETAIL__USER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/UserData in the package rtabmap_msgs.
typedef struct rtabmap_msgs__msg__UserData
{
  std_msgs__msg__Header header;
  uint32_t rows;
  uint32_t cols;
  uint32_t type;
  rosidl_runtime_c__uint8__Sequence data;
} rtabmap_msgs__msg__UserData;

// Struct for a sequence of rtabmap_msgs__msg__UserData.
typedef struct rtabmap_msgs__msg__UserData__Sequence
{
  rtabmap_msgs__msg__UserData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__msg__UserData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__MSG__DETAIL__USER_DATA__STRUCT_H_
