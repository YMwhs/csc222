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
TEST_CASE("Testing median function"){
    CHECK(median(({3, 1, 2}) == 2.0);
}
TEST_CASE("Testing mode"){
    CHECK(render_num_vector(mode({1, 2, 2, 3})) == "2");
}
