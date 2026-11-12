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

vector<int> only_odds(const vector<int>& nums){
    vector<int> odds;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] % 2 != 0){
            odds.push_back(nums[i]);
        }
    }
    return odds;
}

vector<int> nums_between(const vector<int>& nums, int low, int high){
    vector<int> result;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] >= low && nums[i] <= high){
            result.push_back(nums[i]);
        }
    }
    return result;
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
TEST_CASE("Testing only_odds") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> odds = only_odds(nums);
    string expected = "1 3 7 11 27";
    CHECK(render_num_vector(odds) == expected);
}
TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> nums2 = nums_between(nums, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(nums2) == expected);
}
TEST_CASE("Testing count function") {
    vector<int> nums = {11, 20, 11, 4, 10, 26, 7, 88, 19, 20, 11, 5, 32};
    int elevens = counts(nums, 11)
    int twenties = counts(nums, 20)
    int sevens = counts(nums, 7)
    int eights = counts(nums, 8)
    CHECK(elevens == 3);
    CHECK(twenties == 2);
    CHECK(sevens == 1);
    CHECK(eights == 0);
}

