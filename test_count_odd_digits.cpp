#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_odd_digits(int n){
    int count = 0;
    while (n > 0){
        int lastDigit = n % 10;

        if (lastDigit % 2 != 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n"){
    CHECK(count_odd_digits(73) == 2);
    CHECK(count_odd_digits(723) == 2);
    CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(0) == 0);
    CHECK(count_odd_digits(103002) == 2);
    CHECK(count_odd_digits(255) == 2);
    CHECK(count_odd_digits(833) == 2);
}
