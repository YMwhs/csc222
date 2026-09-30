#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int sum_to_n(int a){
    int temp = 0;
    int answer = 0;
    while (temp != a){
            temp++;
            answer += temp;
    }
    return answer;
}

TEST_CASE("sum_to_n(int n) returns sum of integers from 1 to n") {
    CHECK(sum_to_n(3) == 6);
    CHECK(sum_to_n(7) == 28);
    CHECK(sum_to_n(1) == 1);
    CHECK(sum_to_n(42) == 903);
}
