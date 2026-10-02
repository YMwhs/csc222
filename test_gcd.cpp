#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int gcd (int n, int m){

}

TEST_CASE("gcd(int n, int m) returns the GCD of n and m") {
    CHECK(gcd(12, 8) == 4);
    CHECK(gcd(48, 18) == 6);
    CHECK(gcd(7, 13) == 1);
    CHECK(gcd(294, 210) == 42);
    CHECK(gcd(19, 19) == 19);
}
