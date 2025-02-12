// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_status.hpp"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lomas_interfaces/msg/detail/machine_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
// Member 'finished_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace lomas_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachineStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_synced
  {
    out << "is_synced: ";
    rosidl_generator_traits::value_to_yaml(msg.is_synced, out);
    out << ", ";
  }

  // member: sequens_started
  {
    out << "sequens_started: ";
    rosidl_generator_traits::value_to_yaml(msg.sequens_started, out);
    out << ", ";
  }

  // member: machine_moving
  {
    out << "machine_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_moving, out);
    out << ", ";
  }

  // member: sequense_nr
  {
    out << "sequense_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.sequense_nr, out);
    out << ", ";
  }

  // member: error_nr
  {
    out << "error_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.error_nr, out);
    out << ", ";
  }

  // member: interval
  {
    out << "interval: ";
    rosidl_generator_traits::value_to_yaml(msg.interval, out);
    out << ", ";
  }

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

  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: finished_time
  {
    out << "finished_time: ";
    to_flow_style_yaml(msg.finished_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachineStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_synced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_synced: ";
    rosidl_generator_traits::value_to_yaml(msg.is_synced, out);
    out << "\n";
  }

  // member: sequens_started
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequens_started: ";
    rosidl_generator_traits::value_to_yaml(msg.sequens_started, out);
    out << "\n";
  }

  // member: machine_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "machine_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_moving, out);
    out << "\n";
  }

  // member: sequense_nr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequense_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.sequense_nr, out);
    out << "\n";
  }

  // member: error_nr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.error_nr, out);
    out << "\n";
  }

  // member: interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interval: ";
    rosidl_generator_traits::value_to_yaml(msg.interval, out);
    out << "\n";
  }

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

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: finished_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished_time:\n";
    to_block_style_yaml(msg.finished_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachineStatus & msg, bool use_flow_style = false)
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
  const lomas_interfaces::msg::MachineStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  lomas_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lomas_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lomas_interfaces::msg::MachineStatus & msg)
{
  return lomas_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lomas_interfaces::msg::MachineStatus>()
{
  return "lomas_interfaces::msg::MachineStatus";
}

template<>
inline const char * name<lomas_interfaces::msg::MachineStatus>()
{
  return "lomas_interfaces/msg/MachineStatus";
}

template<>
struct has_fixed_size<lomas_interfaces::msg::MachineStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<lomas_interfaces::msg::MachineStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<lomas_interfaces::msg::MachineStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_
