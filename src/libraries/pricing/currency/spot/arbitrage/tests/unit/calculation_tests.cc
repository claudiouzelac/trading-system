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

  // First
  trading::protos::Currency first;
  trading::protos::TradePrice* firstPrice = new trading::protos::TradePrice();
  firstPrice->set_price(1.0985);
  first.set_allocated_price(firstPrice);
  first.set_numeratorsymbol("EUR");
  first.set_demoniatorsymbol("USD");

  // Second
  trading::protos::Currency second;
  trading::protos::TradePrice* secondPrice = new trading::protos::TradePrice();
  secondPrice->set_price(0.849);
  second.set_numeratorsymbol("EUR");
  second.set_demoniatorsymbol("GBP");
  second.set_allocated_price(secondPrice);

  trading::protos::Currency third;
  trading::protos::TradePrice* thirdPrice = new trading::protos::TradePrice();
  thirdPrice->set_price(1.2936);
  third.set_numeratorsymbol("GBP");
  third.set_demoniatorsymbol("USD");
  third.set_allocated_price(thirdPrice);

  auto spread = calc.compute_spread(first, second, third);
  ASSERT_DOUBLE_EQ(0.00023360000000005599, spread);
}
