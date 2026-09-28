#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int find_largest(int n, int m){
    if (n > m){
        return n;
    }
    else if (m > n){
        return m;
    }
    else{
        return n;
    }
}

TEST_CASE("find_largest returns the greater of two integers") {
    CHECK(find_largest(6, 19) == 19);
    CHECK(find_largest(6, 1) == 6);
    CHECK(find_largest(22, 42) == 42);
    CHECK(find_largest(42, 42) == 42);
}
