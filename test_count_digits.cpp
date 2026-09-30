#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_digits(int n){
    int decimalCount = 1;
    if (n >= 10){
        decimalCount++;
    }
    if (n >= 100){
        decimalCount++;
    }
    if (n >= 1000){
        decimalCount++;
    }
    if (n >= 10000){
        decimalCount++;
    }
    if (n >= 100000){
        decimalCount++;
    }
    if (n >= 1000000){
        decimalCount++;
    }
    return decimalCount;
}

TEST_CASE("count_digits(int n) returns number of decimal digits in n") {
    CHECK(count_digits(7) == 1);
    CHECK(count_digits(73) == 2);
    CHECK(count_digits(999) == 3);
    CHECK(count_digits(0) == 1);
    CHECK(count_digits(100000) == 6);
    CHECK(count_digits(0xFF) == 3);
    CHECK(count_digits(0123) == 2);
}
