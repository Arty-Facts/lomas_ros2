// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#include "lomas_interfaces/msg/detail/machine_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_type_hash_t *
lomas_interfaces__msg__MachineCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x4c, 0xaf, 0xc9, 0x6d, 0x29, 0xec, 0x62,
      0xec, 0xe0, 0x33, 0x4a, 0x1d, 0x2b, 0x53, 0x4f,
      0x26, 0x47, 0xb0, 0xa6, 0x0f, 0x93, 0x7e, 0x88,
      0x4d, 0xe8, 0xc1, 0x07, 0xcf, 0x7b, 0x18, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char lomas_interfaces__msg__MachineCommand__TYPE_NAME[] = "lomas_interfaces/msg/MachineCommand";

// Define type names, field names, and default values
static char lomas_interfaces__msg__MachineCommand__FIELD_NAME__x[] = "x";
static char lomas_interfaces__msg__MachineCommand__FIELD_NAME__y[] = "y";
static char lomas_interfaces__msg__MachineCommand__FIELD_NAME__z[] = "z";
static char lomas_interfaces__msg__MachineCommand__FIELD_NAME__stop[] = "stop";

static rosidl_runtime_c__type_description__Field lomas_interfaces__msg__MachineCommand__FIELDS[] = {
  {
    {lomas_interfaces__msg__MachineCommand__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineCommand__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineCommand__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineCommand__FIELD_NAME__stop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lomas_interfaces__msg__MachineCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lomas_interfaces__msg__MachineCommand__TYPE_NAME, 35, 35},
      {lomas_interfaces__msg__MachineCommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 x\n"
  "uint8 y\n"
  "uint8 z\n"
  "bool stop";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lomas_interfaces__msg__MachineCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lomas_interfaces__msg__MachineCommand__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lomas_interfaces__msg__MachineCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lomas_interfaces__msg__MachineCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
