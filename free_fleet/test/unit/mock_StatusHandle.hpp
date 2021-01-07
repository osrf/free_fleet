/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef TEST__UNIT__MOCK_STATUSHANDLE_HPP
#define TEST__UNIT__MOCK_STATUSHANDLE_HPP

#include <free_fleet/agv/StatusHandle.hpp>

namespace free_fleet {

class MockStatusHandle : public agv::StatusHandle
{
public:

  MockStatusHandle()
  {}

  ~MockStatusHandle() final
  {}

  messages::Location location() const final
  {
    return messages::Location();
  }

  messages::RobotMode mode() const final
  {
    return messages::RobotMode();
  }

  double battery_percent() const final
  {
    return 0.0;
  }

  std::size_t target_path_waypoint_index() const final
  {
    return 0;
  }
};

} // namespace free_fleet

#endif // TEST__UNIT__MOCK_STATUSHANDLE_HPP