#pragma once

#include <cstdint>
#include <chrono>
#include <vector>

namespace lamp {

  using namespace std;
  using namespace std::chrono;

  // Four 12 bit values total 6 bytes
  struct LedValue {
    unsigned int r : 12;
    unsigned int g : 12;
    unsigned int b : 12;
    unsigned int w : 12;
  };

  struct ILedBoardChain {

    virtual ~ILedBoardChain() noexcept = default;

    virtual void addKeyframe(milliseconds duration, vector<LedValue> keyframe) = 0;

  };

}