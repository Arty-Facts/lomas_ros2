// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice
#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lomas_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lomas_interfaces/msg/detail/machine_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
bool cdr_serialize_lomas_interfaces__msg__MachineStatus(
  const lomas_interfaces__msg__MachineStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
bool cdr_deserialize_lomas_interfaces__msg__MachineStatus(
  eprosima::fastcdr::Cdr &,
  lomas_interfaces__msg__MachineStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
size_t get_serialized_size_lomas_interfaces__msg__MachineStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
size_t max_serialized_size_lomas_interfaces__msg__MachineStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
bool cdr_serialize_key_lomas_interfaces__msg__MachineStatus(
  const lomas_interfaces__msg__MachineStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
size_t get_serialized_size_key_lomas_interfaces__msg__MachineStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
size_t max_serialized_size_key_lomas_interfaces__msg__MachineStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lomas_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lomas_interfaces, msg, MachineStatus)();

#ifdef __cplusplus
}
#endif

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
