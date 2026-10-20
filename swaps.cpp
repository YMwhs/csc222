#include <iostream>
using namespace std;

void wont_swap(int a, int b){

}

void will_swap(int a, int b){
    
}

int main(){
    int x = 15;
    int y = 6;
    cout << "x: " << x << " y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    wontSwap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    willSwap(x , y);
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}
