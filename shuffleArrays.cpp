#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void shuffleArray(char arr[]){
    for (int i = 9; i > 0; i--){
        int shift = rand() % (i + 1);
        char temp = arr[i];
        arr[i] = arr[shift];
        arr[shift] = temp;    
    }
}

void print_array(char arr[]){
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));

    char numbers[10] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};
    cout << "before: ";
    print_array(numbers);
    shuffleArray(numbers);
    cout << "after: ";
    print_array(numbers);
    return 0;
}


