// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice
#include "lomas_interfaces/msg/detail/machine_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_time`
// Member `finished_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
lomas_interfaces__msg__MachineStatus__init(lomas_interfaces__msg__MachineStatus * msg)
{
  if (!msg) {
    return false;
  }
  // is_synced
  // sequens_started
  // machine_moving
  // sequense_nr
  // error_nr
  // interval
  // x
  // y
  // z
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    lomas_interfaces__msg__MachineStatus__fini(msg);
    return false;
  }
  // finished_time
  if (!builtin_interfaces__msg__Time__init(&msg->finished_time)) {
    lomas_interfaces__msg__MachineStatus__fini(msg);
    return false;
  }
  return true;
}

void
lomas_interfaces__msg__MachineStatus__fini(lomas_interfaces__msg__MachineStatus * msg)
{
  if (!msg) {
    return;
  }
  // is_synced
  // sequens_started
  // machine_moving
  // sequense_nr
  // error_nr
  // interval
  // x
  // y
  // z
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // finished_time
  builtin_interfaces__msg__Time__fini(&msg->finished_time);
}

bool
lomas_interfaces__msg__MachineStatus__are_equal(const lomas_interfaces__msg__MachineStatus * lhs, const lomas_interfaces__msg__MachineStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_synced
  if (lhs->is_synced != rhs->is_synced) {
    return false;
  }
  // sequens_started
  if (lhs->sequens_started != rhs->sequens_started) {
    return false;
  }
  // machine_moving
  if (lhs->machine_moving != rhs->machine_moving) {
    return false;
  }
  // sequense_nr
  if (lhs->sequense_nr != rhs->sequense_nr) {
    return false;
  }
  // error_nr
  if (lhs->error_nr != rhs->error_nr) {
    return false;
  }
  // interval
  if (lhs->interval != rhs->interval) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // finished_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->finished_time), &(rhs->finished_time)))
  {
    return false;
  }
  return true;
}

bool
lomas_interfaces__msg__MachineStatus__copy(
  const lomas_interfaces__msg__MachineStatus * input,
  lomas_interfaces__msg__MachineStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // is_synced
  output->is_synced = input->is_synced;
  // sequens_started
  output->sequens_started = input->sequens_started;
  // machine_moving
  output->machine_moving = input->machine_moving;
  // sequense_nr
  output->sequense_nr = input->sequense_nr;
  // error_nr
  output->error_nr = input->error_nr;
  // interval
  output->interval = input->interval;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // finished_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->finished_time), &(output->finished_time)))
  {
    return false;
  }
  return true;
}

lomas_interfaces__msg__MachineStatus *
lomas_interfaces__msg__MachineStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineStatus * msg = (lomas_interfaces__msg__MachineStatus *)allocator.allocate(sizeof(lomas_interfaces__msg__MachineStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lomas_interfaces__msg__MachineStatus));
  bool success = lomas_interfaces__msg__MachineStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lomas_interfaces__msg__MachineStatus__destroy(lomas_interfaces__msg__MachineStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lomas_interfaces__msg__MachineStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lomas_interfaces__msg__MachineStatus__Sequence__init(lomas_interfaces__msg__MachineStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineStatus * data = NULL;

  if (size) {
    data = (lomas_interfaces__msg__MachineStatus *)allocator.zero_allocate(size, sizeof(lomas_interfaces__msg__MachineStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lomas_interfaces__msg__MachineStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lomas_interfaces__msg__MachineStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lomas_interfaces__msg__MachineStatus__Sequence__fini(lomas_interfaces__msg__MachineStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lomas_interfaces__msg__MachineStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lomas_interfaces__msg__MachineStatus__Sequence *
lomas_interfaces__msg__MachineStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineStatus__Sequence * array = (lomas_interfaces__msg__MachineStatus__Sequence *)allocator.allocate(sizeof(lomas_interfaces__msg__MachineStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lomas_interfaces__msg__MachineStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lomas_interfaces__msg__MachineStatus__Sequence__destroy(lomas_interfaces__msg__MachineStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lomas_interfaces__msg__MachineStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lomas_interfaces__msg__MachineStatus__Sequence__are_equal(const lomas_interfaces__msg__MachineStatus__Sequence * lhs, const lomas_interfaces__msg__MachineStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lomas_interfaces__msg__MachineStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lomas_interfaces__msg__MachineStatus__Sequence__copy(
  const lomas_interfaces__msg__MachineStatus__Sequence * input,
  lomas_interfaces__msg__MachineStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lomas_interfaces__msg__MachineStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lomas_interfaces__msg__MachineStatus * data =
      (lomas_interfaces__msg__MachineStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lomas_interfaces__msg__MachineStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lomas_interfaces__msg__MachineStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lomas_interfaces__msg__MachineStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
