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

int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}

int num_vector_product(const vector<int>& nums){
    int product = 1;
    for (int i = 0; i < nums.size(); i++){
        product *= nums[i];
    }
    return product;
}

vector<int> only_evens(const vector<int>& nums){
    vector<int> evens;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] % 2 == 0){
            evens.push_back(nums[i]);
        }
    }
    return evens;
}

TEST_CASE("Testing render_num_vector but with 5 numbers"){
    vector<int> nums = {2, 4, 6, 8, 10};
    string expected = "2 4 6 8 10";
    CHECK(render_num_vector(nums) == expected);
}

TEST_CASE("Testing render_num_vector but with empty vector"){
    vector<int> nums = {};
    string expected = "";
    CHECK(render_num_vector(nums) == expected);
}

TEST_CASE("Testing render_num_vector"){
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}
TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    CHECK(42 == num_vector_product(nums));
}
TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
