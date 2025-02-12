// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice
#include "lomas_interfaces/msg/detail/machine_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lomas_interfaces__msg__MachineCommand__init(lomas_interfaces__msg__MachineCommand * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // stop
  return true;
}

void
lomas_interfaces__msg__MachineCommand__fini(lomas_interfaces__msg__MachineCommand * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // stop
}

bool
lomas_interfaces__msg__MachineCommand__are_equal(const lomas_interfaces__msg__MachineCommand * lhs, const lomas_interfaces__msg__MachineCommand * rhs)
{
  if (!lhs || !rhs) {
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
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  return true;
}

bool
lomas_interfaces__msg__MachineCommand__copy(
  const lomas_interfaces__msg__MachineCommand * input,
  lomas_interfaces__msg__MachineCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // stop
  output->stop = input->stop;
  return true;
}

lomas_interfaces__msg__MachineCommand *
lomas_interfaces__msg__MachineCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineCommand * msg = (lomas_interfaces__msg__MachineCommand *)allocator.allocate(sizeof(lomas_interfaces__msg__MachineCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lomas_interfaces__msg__MachineCommand));
  bool success = lomas_interfaces__msg__MachineCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lomas_interfaces__msg__MachineCommand__destroy(lomas_interfaces__msg__MachineCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lomas_interfaces__msg__MachineCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lomas_interfaces__msg__MachineCommand__Sequence__init(lomas_interfaces__msg__MachineCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineCommand * data = NULL;

  if (size) {
    data = (lomas_interfaces__msg__MachineCommand *)allocator.zero_allocate(size, sizeof(lomas_interfaces__msg__MachineCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lomas_interfaces__msg__MachineCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lomas_interfaces__msg__MachineCommand__fini(&data[i - 1]);
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
lomas_interfaces__msg__MachineCommand__Sequence__fini(lomas_interfaces__msg__MachineCommand__Sequence * array)
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
      lomas_interfaces__msg__MachineCommand__fini(&array->data[i]);
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

lomas_interfaces__msg__MachineCommand__Sequence *
lomas_interfaces__msg__MachineCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lomas_interfaces__msg__MachineCommand__Sequence * array = (lomas_interfaces__msg__MachineCommand__Sequence *)allocator.allocate(sizeof(lomas_interfaces__msg__MachineCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lomas_interfaces__msg__MachineCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lomas_interfaces__msg__MachineCommand__Sequence__destroy(lomas_interfaces__msg__MachineCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lomas_interfaces__msg__MachineCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lomas_interfaces__msg__MachineCommand__Sequence__are_equal(const lomas_interfaces__msg__MachineCommand__Sequence * lhs, const lomas_interfaces__msg__MachineCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lomas_interfaces__msg__MachineCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lomas_interfaces__msg__MachineCommand__Sequence__copy(
  const lomas_interfaces__msg__MachineCommand__Sequence * input,
  lomas_interfaces__msg__MachineCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lomas_interfaces__msg__MachineCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lomas_interfaces__msg__MachineCommand * data =
      (lomas_interfaces__msg__MachineCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lomas_interfaces__msg__MachineCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lomas_interfaces__msg__MachineCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lomas_interfaces__msg__MachineCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
