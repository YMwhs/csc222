#include "stats_utils.h"

double mean(const vector<int>& nums){
    int sum = 0;
    for (i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum/nums.size();
}
double median(const vector<int>& nums){
    if (nums.empty()) {
        return 0.0;
    }
    vector<int> sorted = insertion_sort(nums);
    int n = sorted.size();

    if (n % 2 != 0) {
        return sorted[n / 2];
    }
    return (static_cast<double>(sorted[n / 2 - 1]) + sorted[n / 2]) / 2.0;
}
vector<int> mode(const vector<int> && nums){
    vector<int> sorted = insertion_sort(nums);
    vector<int> modes;
    int highest = 0;

    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0 && sorted[i] == sorted[i - 1]) {
            continue;
        }

        int frequency = counts(sorted, sorted[i]);

        if (frequency > highest) {
            highest = frequency;
            modes.clear();
            modes.push_back(sorted[i]);
        }
        else if (frequency == highest) {
            modes.push_back(sorted[i]);
        }
    }
    return modes;
}
