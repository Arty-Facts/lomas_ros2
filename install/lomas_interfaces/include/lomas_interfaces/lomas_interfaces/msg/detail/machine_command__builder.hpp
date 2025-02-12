// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lomas_interfaces:msg/MachineCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_command.hpp"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lomas_interfaces/msg/detail/machine_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lomas_interfaces
{

namespace msg
{

namespace builder
{

class Init_MachineCommand_stop
{
public:
  explicit Init_MachineCommand_stop(::lomas_interfaces::msg::MachineCommand & msg)
  : msg_(msg)
  {}
  ::lomas_interfaces::msg::MachineCommand stop(::lomas_interfaces::msg::MachineCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineCommand msg_;
};

class Init_MachineCommand_z
{
public:
  explicit Init_MachineCommand_z(::lomas_interfaces::msg::MachineCommand & msg)
  : msg_(msg)
  {}
  Init_MachineCommand_stop z(::lomas_interfaces::msg::MachineCommand::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MachineCommand_stop(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineCommand msg_;
};

class Init_MachineCommand_y
{
public:
  explicit Init_MachineCommand_y(::lomas_interfaces::msg::MachineCommand & msg)
  : msg_(msg)
  {}
  Init_MachineCommand_z y(::lomas_interfaces::msg::MachineCommand::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MachineCommand_z(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineCommand msg_;
};

class Init_MachineCommand_x
{
public:
  Init_MachineCommand_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineCommand_y x(::lomas_interfaces::msg::MachineCommand::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MachineCommand_y(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lomas_interfaces::msg::MachineCommand>()
{
  return lomas_interfaces::msg::builder::Init_MachineCommand_x();
}

}  // namespace lomas_interfaces

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_
