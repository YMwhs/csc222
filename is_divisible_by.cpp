#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

bool is_divisible_by(int n, int d){
    if (n % d != 0){
        return false;
    }
    else{
        return true;
    }
}

TEST_CASE("is_divisible_by(int n, int d) returns whether d divides n"){
    CHECK(is_divisible_by(10, 5) == true);
    CHECK(is_divisible_by(10, 30) == false);
    CHECK(is_divisible_by(3, 10) == false);
    CHECK(is_divisible_by(0, 7) == true);
}
