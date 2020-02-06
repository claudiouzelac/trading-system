// Copyright 2019 Stewart Henderson. All rights reserved.

#include "src/libraries/pricing/currency/spot/arbitrage/inc/calculation.h"

double trading::currency::spot::arbitrage::Calculation::compute_spread(
    protos::Currency first, protos::Currency second, protos::Currency third) {
  // NOTE: if any of the currencies are unavailable then
  // report that there is no opportunity for arbitrage.
  if (!first.has_price() || !second.has_price() || !third.has_price()) return 0;
  auto spread =
      first.price().price() - second.price().price() + third.price().price();
  return spread;
}
