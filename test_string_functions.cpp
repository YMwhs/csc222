#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string reverse_string(string s){
       string reversedWord = "";
       for (int index = s.length() - 1; index >= 0; index--){
            reversedWord += s[index];
       }
       return reversedWord;
}

int count_vowels(string s){

}

// Your function goes here
TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy").compare("yppah") == 0);
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}

// Function 2
TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);
}
