#include "stats_utils.h"

double mean(const vector<int>& nums){
    int sum = num_vector_sum(nums);
    return static_cast<double>(sum)/nums.size();
}


