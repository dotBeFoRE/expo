/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <gmock/gmock.h>

#include <ABI46_0_0React/ABI46_0_0renderer/scheduler/SurfaceHandler.h>

namespace ABI46_0_0facebook {
namespace ABI46_0_0React {

class MockSurfaceHandler : public SurfaceHandler {
 public:
  MockSurfaceHandler() : SurfaceHandler("moduleName", 0){};

  MOCK_METHOD(void, setDisplayMode, (DisplayMode), (const, noexcept));
  MOCK_METHOD(SurfaceId, getSurfaceId, (), (const, noexcept));
};

} // namespace ABI46_0_0React
} // namespace ABI46_0_0facebook
