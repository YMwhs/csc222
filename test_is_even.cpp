#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

bool is_even(int n){
   if (n >= 0){
        return true;
   }
   else{
        return false;
   }
}

TEST_CASE("is_even identifies even numbers") {
    CHECK(is_even(0) == true);
    CHECK(is_even(2) == true);
    CHECK(is_even(-4) == true);
    CHECK(is_even(1) == false);
    CHECK(is_even(-7) == false);
}
