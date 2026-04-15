#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.hpp"

// Each test runs in separate process — static count resets to 0 each time.
// hanoi(n) makes 2^n - 1 recursive calls total.

TEST_CASE("hanoi(1) == 1", "[T1]") { REQUIRE(hanoi(1,'A','C','B') == 1); }
TEST_CASE("hanoi(2) == 3", "[T2]") { REQUIRE(hanoi(2,'A','C','B') == 3); }
TEST_CASE("hanoi(3) == 7", "[T3]") { REQUIRE(hanoi(3,'A','C','B') == 7); }
TEST_CASE("hanoi(4) == 15", "[T4]") { REQUIRE(hanoi(4,'A','C','B') == 15); }
TEST_CASE("hanoi(5) == 31", "[T5]") { REQUIRE(hanoi(5,'A','C','B') == 31); }
TEST_CASE("hanoi(6) == 63", "[T6]") { REQUIRE(hanoi(6,'A','C','B') == 63); }
