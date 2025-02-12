// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_command.h"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__FUNCTIONS_H_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "lomas_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lomas_interfaces/msg/detail/machine_command__struct.h"

/// Initialize msg/MachineCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lomas_interfaces__msg__MachineCommand
 * )) before or use
 * lomas_interfaces__msg__MachineCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__init(lomas_interfaces__msg__MachineCommand * msg);

/// Finalize msg/MachineCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
void
lomas_interfaces__msg__MachineCommand__fini(lomas_interfaces__msg__MachineCommand * msg);

/// Create msg/MachineCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lomas_interfaces__msg__MachineCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
lomas_interfaces__msg__MachineCommand *
lomas_interfaces__msg__MachineCommand__create(void);

/// Destroy msg/MachineCommand message.
/**
 * It calls
 * lomas_interfaces__msg__MachineCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
void
lomas_interfaces__msg__MachineCommand__destroy(lomas_interfaces__msg__MachineCommand * msg);

/// Check for msg/MachineCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__are_equal(const lomas_interfaces__msg__MachineCommand * lhs, const lomas_interfaces__msg__MachineCommand * rhs);

/// Copy a msg/MachineCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__copy(
  const lomas_interfaces__msg__MachineCommand * input,
  lomas_interfaces__msg__MachineCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_type_hash_t *
lomas_interfaces__msg__MachineCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
lomas_interfaces__msg__MachineCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_runtime_c__type_description__TypeSource *
lomas_interfaces__msg__MachineCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
lomas_interfaces__msg__MachineCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MachineCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * lomas_interfaces__msg__MachineCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__Sequence__init(lomas_interfaces__msg__MachineCommand__Sequence * array, size_t size);

/// Finalize array of msg/MachineCommand messages.
/**
 * It calls
 * lomas_interfaces__msg__MachineCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
void
lomas_interfaces__msg__MachineCommand__Sequence__fini(lomas_interfaces__msg__MachineCommand__Sequence * array);

/// Create array of msg/MachineCommand messages.
/**
 * It allocates the memory for the array and calls
 * lomas_interfaces__msg__MachineCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
lomas_interfaces__msg__MachineCommand__Sequence *
lomas_interfaces__msg__MachineCommand__Sequence__create(size_t size);

/// Destroy array of msg/MachineCommand messages.
/**
 * It calls
 * lomas_interfaces__msg__MachineCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
void
lomas_interfaces__msg__MachineCommand__Sequence__destroy(lomas_interfaces__msg__MachineCommand__Sequence * array);

/// Check for msg/MachineCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__Sequence__are_equal(const lomas_interfaces__msg__MachineCommand__Sequence * lhs, const lomas_interfaces__msg__MachineCommand__Sequence * rhs);

/// Copy an array of msg/MachineCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lomas_interfaces
bool
lomas_interfaces__msg__MachineCommand__Sequence__copy(
  const lomas_interfaces__msg__MachineCommand__Sequence * input,
  lomas_interfaces__msg__MachineCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__FUNCTIONS_H_
