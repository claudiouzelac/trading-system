// Copyright 2019 Stewart Henderson. All rights reserved.

#include "src/libraries/pricing/base/inc/diffusion_process.h"

const double pricing::base::DiffusionProcess::initial() const {
  return initial_;
}

const double pricing::base::DiffusionProcess::diffusion(std::time_t time,
                                                        double x) const {
  return 0;
}

const double pricing::base::DiffusionProcess::variance(
    std::time_t initial, double x, std::time_t second) const {
  return 0;
}

const double pricing::base::DiffusionProcess::expectation(
    std::time_t initial, double x, std::time_t second) const {
  auto sigma = diffusion(initial, x);
  return pow(sigma, 2) * second;
}
