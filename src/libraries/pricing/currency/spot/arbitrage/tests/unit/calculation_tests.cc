// Copyright 2019 Stewart Henderson. All rights reserved.

#include "gtest/gtest.h"

#include "src/libraries/pricing/currency/spot/arbitrage/inc/calculation.h"
#include "src/libraries/protos/risk/currency.pb.h"
#include "src/libraries/protos/risk/tradeprice.pb.h"

TEST(FactorialTest, Negative) {
  trading::currency::spot::arbitrage::Calculation calc;
  trading::protos::Currency first;
  trading::protos::TradePrice firstPrice;
  firstPrice.set_price(1);

  trading::protos::Currency second;
  trading::protos::TradePrice secondPrice;
  secondPrice.set_price(0);

  trading::protos::Currency third;
  trading::protos::TradePrice thirdPrice;
  thirdPrice.set_price(1);

  auto spread = calc.compute_spread(first, second, third);
  EXPECT_EQ(0, spread);
}
