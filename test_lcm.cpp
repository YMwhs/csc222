#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;
int findgcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm (int n, int m){
    if (n == 0 || m == 0){
        return 0;
    }
    return (n * m) / findgcd(n, m);
}
TEST_CASE("lcm(int n, int m) returns the LCM of n and m") {
    CHECK(lcm(12, 20) == 60);
    CHECK(lcm(3, 5) == 15);
    CHECK(lcm(6, 10) == 30);
    CHECK(lcm(7, 7) == 7);
    CHECK(lcm(24, 56) == 168);
}
