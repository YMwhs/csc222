#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

bool is_prime(int n){
    if (n < 2){
        return false;
    }
    for (int temp = 2; temp * temp <= n; temp++){
        if (n % temp == 0){
            return false;
        }
    }
    return true;
}

TEST_CASE("is_prime(int n) returns true if n is a prime number") {
    CHECK(is_prime(0) == false);
    CHECK(is_prime(1) == false);
    CHECK(is_prime(2) == true);
    CHECK(is_prime(3) == true);
    CHECK(is_prime(4) == false);
    CHECK(is_prime(9) == false);
    CHECK(is_prime(19) == true);
    CHECK(is_prime(27) == false);
}
