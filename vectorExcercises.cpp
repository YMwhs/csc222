#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> text(5);
    char *chp1 = text.data() + 2, *chp2 = chp1 + 3;
    cout << chp2 - text.data() << endl;
    return 0;
}
