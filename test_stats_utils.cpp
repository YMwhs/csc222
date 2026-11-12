#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "stats_utils.h"
using namespace std;

TEST_CASE("Testing mean function") {
    vector<int> nums = {1, 3, 7, 9};
    CHECK(5 == mean(nums));
}
