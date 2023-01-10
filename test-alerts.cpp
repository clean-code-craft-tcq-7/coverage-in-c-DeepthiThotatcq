#define CATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
  
  REQUIRE(inferBreach(35, 20, 30) == TOO_HIGH);
}
