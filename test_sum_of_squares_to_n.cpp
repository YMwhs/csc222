#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int sum_of_squares_to_n(int n){
    int temp = n;
    int answer = 0;
    while (temp > 0){
        int anotherTemp = 0;
        anotherTemp = temp * temp;
        answer += anotherTemp;
        temp--;
    }
    return answer;
}

TEST_CASE("sum_of_squares_to_n(int n) sums squares from 1 to n") {
    CHECK(sum_of_squares_to_n(1) == 1);
    CHECK(sum_of_squares_to_n(3) == 14);
    CHECK(sum_of_squares_to_n(5) == 55);
    CHECK(sum_of_squares_to_n(6) == 91);
}
