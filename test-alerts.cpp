#define CATCH_CONFIG_MAIN
#include <unistd.h>
#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
  REQUIRE(inferBreach(40, 20, 30) == TOO_HIGH);
  REQUIRE(inferBreach(25, 20, 30) == NORMAL);
  REQUIRE(inferBreach(20, 20, 30) == NORMAL);
  REQUIRE(inferBreach(30, 20, 30) == NORMAL);
  REQUIRE(inferBreach(-10.0, 100.2, 1000.67) == TOO_LOW);
}
