#include <iostream>
using namespace std;

void wont_swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  cout << "a: " << a << " b: " << b << endl;
}

void will_swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << " b: " << b << endl;
}

int main(){
    int x = 15;
    int y = 6;
    cout << "x: " << x << " y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    wont_swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    will_swap(x , y);
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}
