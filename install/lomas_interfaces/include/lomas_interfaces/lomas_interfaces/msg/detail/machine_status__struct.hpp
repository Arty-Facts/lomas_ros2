// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lomas_interfaces:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lomas_interfaces/msg/machine_status.hpp"


#ifndef LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_
#define LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_time'
// Member 'finished_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lomas_interfaces__msg__MachineStatus __attribute__((deprecated))
#else
# define DEPRECATED__lomas_interfaces__msg__MachineStatus __declspec(deprecated)
#endif

namespace lomas_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachineStatus_
{
  using Type = MachineStatus_<ContainerAllocator>;

  explicit MachineStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    finished_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_synced = false;
      this->sequens_started = false;
      this->machine_moving = false;
      this->sequense_nr = 0;
      this->error_nr = 0;
      this->interval = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit MachineStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    finished_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_synced = false;
      this->sequens_started = false;
      this->machine_moving = false;
      this->sequense_nr = 0;
      this->error_nr = 0;
      this->interval = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _is_synced_type =
    bool;
  _is_synced_type is_synced;
  using _sequens_started_type =
    bool;
  _sequens_started_type sequens_started;
  using _machine_moving_type =
    bool;
  _machine_moving_type machine_moving;
  using _sequense_nr_type =
    uint8_t;
  _sequense_nr_type sequense_nr;
  using _error_nr_type =
    uint8_t;
  _error_nr_type error_nr;
  using _interval_type =
    uint16_t;
  _interval_type interval;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _finished_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _finished_time_type finished_time;

  // setters for named parameter idiom
  Type & set__is_synced(
    const bool & _arg)
  {
    this->is_synced = _arg;
    return *this;
  }
  Type & set__sequens_started(
    const bool & _arg)
  {
    this->sequens_started = _arg;
    return *this;
  }
  Type & set__machine_moving(
    const bool & _arg)
  {
    this->machine_moving = _arg;
    return *this;
  }
  Type & set__sequense_nr(
    const uint8_t & _arg)
  {
    this->sequense_nr = _arg;
    return *this;
  }
  Type & set__error_nr(
    const uint8_t & _arg)
  {
    this->error_nr = _arg;
    return *this;
  }
  Type & set__interval(
    const uint16_t & _arg)
  {
    this->interval = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__finished_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->finished_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lomas_interfaces::msg::MachineStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const lomas_interfaces::msg::MachineStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lomas_interfaces::msg::MachineStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lomas_interfaces::msg::MachineStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lomas_interfaces__msg__MachineStatus
    std::shared_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lomas_interfaces__msg__MachineStatus
    std::shared_ptr<lomas_interfaces::msg::MachineStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachineStatus_ & other) const
  {
    if (this->is_synced != other.is_synced) {
      return false;
    }
    if (this->sequens_started != other.sequens_started) {
      return false;
    }
    if (this->machine_moving != other.machine_moving) {
      return false;
    }
    if (this->sequense_nr != other.sequense_nr) {
      return false;
    }
    if (this->error_nr != other.error_nr) {
      return false;
    }
    if (this->interval != other.interval) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->finished_time != other.finished_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachineStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachineStatus_

// alias to use template instance with default allocator
using MachineStatus =
  lomas_interfaces::msg::MachineStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lomas_interfaces

#endif  // LOMAS_INTERFACES__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_
