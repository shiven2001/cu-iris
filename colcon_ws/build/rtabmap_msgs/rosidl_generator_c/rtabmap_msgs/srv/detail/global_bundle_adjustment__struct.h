// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_
#define RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GlobalBundleAdjustment in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Request
{
  int32_t type;
  int32_t iterations;
  float pixel_variance;
  bool voc_matches;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Request;

// Struct for a sequence of rtabmap_msgs__srv__GlobalBundleAdjustment_Request.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Request__Sequence
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GlobalBundleAdjustment in the package rtabmap_msgs.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Response
{
  uint8_t structure_needs_at_least_one_member;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Response;

// Struct for a sequence of rtabmap_msgs__srv__GlobalBundleAdjustment_Response.
typedef struct rtabmap_msgs__srv__GlobalBundleAdjustment_Response__Sequence
{
  rtabmap_msgs__srv__GlobalBundleAdjustment_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtabmap_msgs__srv__GlobalBundleAdjustment_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_H_
