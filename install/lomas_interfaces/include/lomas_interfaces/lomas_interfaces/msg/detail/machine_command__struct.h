// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_command.h"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MachineCommand in the package lomas_interfaces.
typedef struct lomas_interfaces__msg__MachineCommand
{
  uint8_t x;
  uint8_t y;
  uint8_t z;
  bool stop;
} lomas_interfaces__msg__MachineCommand;

// Struct for a sequence of lomas_interfaces__msg__MachineCommand.
typedef struct lomas_interfaces__msg__MachineCommand__Sequence
{
  lomas_interfaces__msg__MachineCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lomas_interfaces__msg__MachineCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_
