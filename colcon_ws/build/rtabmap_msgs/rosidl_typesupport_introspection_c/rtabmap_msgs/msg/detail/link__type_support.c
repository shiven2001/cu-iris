// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtabmap_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtabmap_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "rtabmap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtabmap_msgs/msg/detail/link__functions.h"
#include "rtabmap_msgs/msg/detail/link__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtabmap_msgs__msg__Link__init(message_memory);
}

void Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  rtabmap_msgs__msg__Link__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Link__rosidl_typesupport_introspection_c__Link_message_member_array[5] = {
  {
    "from_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, from_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, to_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(rtabmap_msgs__msg__Link, information),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "rtabmap_msgs__msg",  // message namespace
  "Link",  // message name
  5,  // number of fields
  sizeof(rtabmap_msgs__msg__Link),
  Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtabmap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtabmap_msgs, msg, Link)() {
  Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
