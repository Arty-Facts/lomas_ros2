// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_command.hpp"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lomas_interfaces/msg/detail/machine_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lomas_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachineCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: stop
  {
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachineCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachineCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lomas_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lomas_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lomas_interfaces::msg::MachineCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  lomas_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lomas_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lomas_interfaces::msg::MachineCommand & msg)
{
  return lomas_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lomas_interfaces::msg::MachineCommand>()
{
  return "lomas_interfaces::msg::MachineCommand";
}

template<>
inline const char * name<lomas_interfaces::msg::MachineCommand>()
{
  return "lomas_interfaces/msg/MachineCommand";
}

template<>
struct has_fixed_size<lomas_interfaces::msg::MachineCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lomas_interfaces::msg::MachineCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lomas_interfaces::msg::MachineCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_
