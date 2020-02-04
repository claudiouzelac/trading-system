// Copyright 2019 Stewart Henderson. All rights reserved.

#pragma once
#ifndef __SPOT_ARBITRAGE_CALCULATION__
#define __SPOT_ARBITRAGE_CALCULATION__

include "currency.pb.h"

    namespace trading {
  namespace currency {
  namespace spot {
  namespace arbitrage {
  class Calculation {
    double compute_spread(Currency currency);
  };

  }  // namespace arbitrage
  }  // namespace spot
  }  // namespace currency
}  // namespace trading

#endif  //__SPOT_ARBITRAGE_CALCULATION__
