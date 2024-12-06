// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CleanupLocalGrids in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Request
{
  int32_t radius;
  bool filter_scans;
} rtabmap_msgs__srv__CleanupLocalGrids_Request;

// Struct for a sequence of rtabmap_msgs__srv__CleanupLocalGrids_Request.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Request__Sequence
{
  rtabmap_msgs__srv__CleanupLocalGrids_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__CleanupLocalGrids_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CleanupLocalGrids in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Response
{
  int32_t modified;
} rtabmap_msgs__srv__CleanupLocalGrids_Response;

// Struct for a sequence of rtabmap_msgs__srv__CleanupLocalGrids_Response.
typedef struct rtabmap_msgs__srv__CleanupLocalGrids_Response__Sequence
{
  rtabmap_msgs__srv__CleanupLocalGrids_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__CleanupLocalGrids_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_H_
