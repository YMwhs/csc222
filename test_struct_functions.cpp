#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
TEST_CASE("distance_from_origin(p) returns p's distance from (0, 0) ") {
    p = Point{3, 4};
    CHECK(distance_from_origin(p) == 5.0);
}
