// Copyright 2019 Stewart Henderson. All rights reserved.

#pragma once
#ifndef __BACKTEST__
#define __BACKTEST__

#include <vector>

#include "exchange.hpp"
#include "match_algorithms.hpp"

class Backtest {
 public:
  explicit Backtest(std::vector<Exchange> exchanges);
};

#endif  //__BACKTEST__
