// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lomas_interfaces/msg/detail/machine_command__functions.h"
#include "lomas_interfaces/msg/detail/machine_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lomas_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MachineCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lomas_interfaces::msg::MachineCommand(_init);
}

void MachineCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lomas_interfaces::msg::MachineCommand *>(message_memory);
  typed_message->~MachineCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MachineCommand_message_member_array[4] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lomas_interfaces::msg::MachineCommand, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lomas_interfaces::msg::MachineCommand, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lomas_interfaces::msg::MachineCommand, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lomas_interfaces::msg::MachineCommand, stop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MachineCommand_message_members = {
  "lomas_interfaces::msg",  // message namespace
  "MachineCommand",  // message name
  4,  // number of fields
  sizeof(lomas_interfaces::msg::MachineCommand),
  false,  // has_any_key_member_
  MachineCommand_message_member_array,  // message members
  MachineCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MachineCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MachineCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MachineCommand_message_members,
  get_message_typesupport_handle_function,
  &lomas_interfaces__msg__MachineCommand__get_type_hash,
  &lomas_interfaces__msg__MachineCommand__get_type_description,
  &lomas_interfaces__msg__MachineCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lomas_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lomas_interfaces::msg::MachineCommand>()
{
  return &::lomas_interfaces::msg::rosidl_typesupport_introspection_cpp::MachineCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lomas_interfaces, msg, MachineCommand)() {
  return &::lomas_interfaces::msg::rosidl_typesupport_introspection_cpp::MachineCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
