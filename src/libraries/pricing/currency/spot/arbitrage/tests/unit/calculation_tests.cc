// Copyright 2019 Stewart Henderson. All rights reserved.

#include "gtest/gtest.h"

#include "src/libraries/pricing/currency/spot/arbitrage/inc/calculation.h"
#include "src/libraries/protos/risk/currency.pb.h"
#include "src/libraries/protos/risk/tradeprice.pb.h"

/**
 * An example of spot currency arbitrage can be seen as:
 *
 * EUR/USD = EUR/GBP * GBP/USD
 * GBP/USD = GBP/EUR * EUR/USD
 * EUR/GBP = EUR/USD * USD/GBP
 *
 * To see if there is an arbitrage opportunity:
 *      EUR/USD - EUR/GBP * GBP/USD = spread
 * For no arbitrage conditions to hold,
 *      spread >= 0
 * For arbitrage conditions,
 *      spread < 0
 *
 * An worked example as of 2/6/2020 at 7:39 PM CST:
 *  1. EUR/USD = 1.0985
 *  2. GBP/USD = 1.2936
 *  3. EUR/GBP = 0.849
 *
 * Now to check for arbitrage opportunities:
 *   EUR/USD = 0.849 * 1.2936
 *           = 1.0982664
 *
 * References:
 *  1. Yahoo! Finance,
 * https://finance.yahoo.com/quote/EURGBP=X?p=EURGBP=X&.tsrc=fin-srch Where
 * EURGBP is the FX symbol with the / character removed.
 */
TEST(FactorialTest, Negative) {
  trading::currency::spot::arbitrage::Calculation calc;
  trading::protos::Currency first;
  trading::protos::TradePrice firstPrice;
  firstPrice.set_price(1.0985);

  trading::protos::Currency second;
  trading::protos::TradePrice secondPrice;
  secondPrice.set_price(0.849);

  trading::protos::Currency third;
  trading::protos::TradePrice thirdPrice;
  thirdPrice.set_price(1.2936);

  auto spread = calc.compute_spread(first, second, third);
  ASSERT_DOUBLE_EQ(0.00023360000000000001, spread);
}
