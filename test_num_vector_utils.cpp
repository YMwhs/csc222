#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

string render_num_vector(const vector<int>& nums){
    string s = "";

    for (int i = 0; i < nums.size(); i++){
        if (i > 0){
            s += " ";
        }
        s += to_string(nums[i]);
    }
    return s;
}

TEST_CASE("Testing render_num_vector"){
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}
