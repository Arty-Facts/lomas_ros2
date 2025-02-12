// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#include "lomas_interfaces/msg/detail/machine_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_type_hash_t *
lomas_interfaces__msg__MachineStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x02, 0x79, 0x3f, 0x6e, 0xda, 0x71, 0xdf,
      0x74, 0x61, 0x45, 0x94, 0x5d, 0x73, 0x1d, 0x7b,
      0x28, 0xe1, 0xc9, 0x37, 0xab, 0x40, 0xf1, 0x2a,
      0x0e, 0x37, 0x8d, 0x0f, 0xad, 0xf5, 0xfd, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char lomas_interfaces__msg__MachineStatus__TYPE_NAME[] = "lomas_interfaces/msg/MachineStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__is_synced[] = "is_synced";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__sequens_started[] = "sequens_started";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__machine_moving[] = "machine_moving";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__sequense_nr[] = "sequense_nr";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__error_nr[] = "error_nr";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__interval[] = "interval";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__x[] = "x";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__y[] = "y";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__z[] = "z";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__start_time[] = "start_time";
static char lomas_interfaces__msg__MachineStatus__FIELD_NAME__finished_time[] = "finished_time";

static rosidl_runtime_c__type_description__Field lomas_interfaces__msg__MachineStatus__FIELDS[] = {
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__is_synced, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__sequens_started, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__machine_moving, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__sequense_nr, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__error_nr, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__interval, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {lomas_interfaces__msg__MachineStatus__FIELD_NAME__finished_time, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lomas_interfaces__msg__MachineStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lomas_interfaces__msg__MachineStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lomas_interfaces__msg__MachineStatus__TYPE_NAME, 34, 34},
      {lomas_interfaces__msg__MachineStatus__FIELDS, 11, 11},
    },
    {lomas_interfaces__msg__MachineStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool  is_synced         # Used\n"
  "bool  sequens_started   # Used\n"
  "bool  machine_moving    # Used\n"
  "uint8 sequense_nr       # Used\n"
  "uint8 error_nr          # Used\n"
  "uint16 interval         # Used\n"
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "builtin_interfaces/Time start_time\n"
  "builtin_interfaces/Time finished_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lomas_interfaces__msg__MachineStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lomas_interfaces__msg__MachineStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 288, 288},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lomas_interfaces__msg__MachineStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lomas_interfaces__msg__MachineStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
