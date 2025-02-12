// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_status.h"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'start_time'
// Member 'finished_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MachineStatus in the package lomas_interfaces.
typedef struct lomas_interfaces__msg__MachineStatus
{
  /// Used
  bool is_synced;
  /// Used
  bool sequens_started;
  /// Used
  bool machine_moving;
  /// Used
  uint8_t sequense_nr;
  /// Used
  uint8_t error_nr;
  /// Used
  uint16_t interval;
  float x;
  float y;
  float z;
  builtin_interfaces__msg__Time start_time;
  builtin_interfaces__msg__Time finished_time;
} lomas_interfaces__msg__MachineStatus;

// Struct for a sequence of lomas_interfaces__msg__MachineStatus.
typedef struct lomas_interfaces__msg__MachineStatus__Sequence
{
  lomas_interfaces__msg__MachineStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lomas_interfaces__msg__MachineStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
