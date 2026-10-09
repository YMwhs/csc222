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
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            count++;
        }
    }
    return count;
}

bool is_palindrome(string s){
    for (int i = 0; i < s.length() / 2; i++){
        if (s[i] != s[s.length() - 1 - i]){
            return false;
        }
    }
    return true;
}

int count_words(string s){
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < s.length(); i++){
        if (s[i] != ' '){
            if (!inWord){
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
        }
    return count;
}

string shout(string s){
    for (int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    
    if (!s.empty() && s[s.length() - 1] == '.'){
        s[s.length() - 1] = '!';
    }
    else if (s.empty() || s[s.length() - 1] != '!'){
        s += '!';
    }
    return s;
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

// Function 3
TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
// Function 4
TEST_CASE("count_words counts words") {
    CHECK(count_words("") == 0);
    CHECK(count_words("Word!") == 1);
    CHECK(count_words("Thing1 and Thing2") == 3);
    CHECK(count_words("This is the song that never ends.") == 7);
}
// Function 5
TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
}
