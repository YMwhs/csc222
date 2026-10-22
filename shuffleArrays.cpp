#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void shuffleArray(int arr[]){
    for (int i = 0; i < 5; i++){
        cout << arr[i + srand(time(NULL))] << endl;
    }
}

int main()
{
    int numbers[5] = {5, 4, 3, 2, 1};
    shuffleArray(numbers);
    return 0;
}


