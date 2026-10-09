#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

int u = 2, v = 4, total = 0;
do{
    total += u < v ? ++u : v--;
} while (total < 10);
cout << u << '&' << v << endl;
