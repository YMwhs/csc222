#include <iostream>
using namespace std;

void f() {
    cout << "C";
}

void g() {
    cout << "B";
}

void h() {
    cout << "A";
}

int main() {

    f();
    g();
    h();
    cout << endl;
    return 0;
}
