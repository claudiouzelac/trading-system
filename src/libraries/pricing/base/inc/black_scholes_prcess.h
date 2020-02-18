// Copyright 2019 Stewart Henderson. All rights reserved.

#pragma once
#ifndef __BLACK_SCHOLES_PROCESS__
#define __BLACK_SCHOLES_PROCESS__

#include "src/libraries/pricing/base/inc/diffusion_process.h"

namespace pricing {
namespace base {
class BlackScholesProcess : public DiffusionProcess {
 public:
  BlackScholesProcess(double rate, double volatility);
};
}  // namespace base
}  // namespace pricing

#endif  //__BLACK_SCHOLES_PROCESS__
