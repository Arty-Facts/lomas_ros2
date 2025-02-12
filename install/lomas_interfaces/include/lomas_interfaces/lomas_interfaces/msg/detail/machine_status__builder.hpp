// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_status.hpp"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lomas_interfaces/msg/detail/machine_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lomas_interfaces
{

namespace msg
{

namespace builder
{

class Init_MachineStatus_finished_time
{
public:
  explicit Init_MachineStatus_finished_time(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  ::lomas_interfaces::msg::MachineStatus finished_time(::lomas_interfaces::msg::MachineStatus::_finished_time_type arg)
  {
    msg_.finished_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_start_time
{
public:
  explicit Init_MachineStatus_start_time(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_finished_time start_time(::lomas_interfaces::msg::MachineStatus::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_MachineStatus_finished_time(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_z
{
public:
  explicit Init_MachineStatus_z(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_start_time z(::lomas_interfaces::msg::MachineStatus::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MachineStatus_start_time(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_y
{
public:
  explicit Init_MachineStatus_y(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_z y(::lomas_interfaces::msg::MachineStatus::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MachineStatus_z(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_x
{
public:
  explicit Init_MachineStatus_x(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_y x(::lomas_interfaces::msg::MachineStatus::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MachineStatus_y(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_interval
{
public:
  explicit Init_MachineStatus_interval(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_x interval(::lomas_interfaces::msg::MachineStatus::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return Init_MachineStatus_x(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_error_nr
{
public:
  explicit Init_MachineStatus_error_nr(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_interval error_nr(::lomas_interfaces::msg::MachineStatus::_error_nr_type arg)
  {
    msg_.error_nr = std::move(arg);
    return Init_MachineStatus_interval(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_sequense_nr
{
public:
  explicit Init_MachineStatus_sequense_nr(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_error_nr sequense_nr(::lomas_interfaces::msg::MachineStatus::_sequense_nr_type arg)
  {
    msg_.sequense_nr = std::move(arg);
    return Init_MachineStatus_error_nr(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_machine_moving
{
public:
  explicit Init_MachineStatus_machine_moving(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_sequense_nr machine_moving(::lomas_interfaces::msg::MachineStatus::_machine_moving_type arg)
  {
    msg_.machine_moving = std::move(arg);
    return Init_MachineStatus_sequense_nr(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_sequens_started
{
public:
  explicit Init_MachineStatus_sequens_started(::lomas_interfaces::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_machine_moving sequens_started(::lomas_interfaces::msg::MachineStatus::_sequens_started_type arg)
  {
    msg_.sequens_started = std::move(arg);
    return Init_MachineStatus_machine_moving(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

class Init_MachineStatus_is_synced
{
public:
  Init_MachineStatus_is_synced()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineStatus_sequens_started is_synced(::lomas_interfaces::msg::MachineStatus::_is_synced_type arg)
  {
    msg_.is_synced = std::move(arg);
    return Init_MachineStatus_sequens_started(msg_);
  }

private:
  ::lomas_interfaces::msg::MachineStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lomas_interfaces::msg::MachineStatus>()
{
  return lomas_interfaces::msg::builder::Init_MachineStatus_is_synced();
}

}  // namespace lomas_interfaces

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
