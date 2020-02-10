// Copyright 2019 Stewart Henderson. All rights reserved.

#pragma once
#ifndef __DIFFUSION_PROCESS__
#define __DIFFUSION_PROCESS__

#include <chrono>
#include <cmath>

namespace pricing {
namespace base {
class DiffusionProcess {
 public:
  DiffusionProcess(double initial) : initial_(initial){};
  const double initial() const;
  virtual const double drift(std::time_t time, double x) const = 0;
  virtual const double diffusion(std::time_t time, double x) const = 0;
  virtual const double variance(std::time_t initial, double x,
                                std::time_t second) const;
  virtual const double expectation(std::time_t initial, double x,
                                   std::time_t second) const;

 private:
  double initial_;
};
}  // namespace base
}  // namespace pricing

#endif  //__DIFFUSION_PROCESS__
