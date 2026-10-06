#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string reverse_string(string s){
       string reversedWord = "";
       for (int index = s.length(); index > s.length(); index--){
            char letter = s[index];
            reversedWord += letter;
       }
       return reversedWord;
}

// Your function goes here
TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}
