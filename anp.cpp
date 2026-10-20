#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {0, 0, 0, 0};
    nums[0] = 7;
    nums[1] = nums[0] * 2;
    nums[2]++;
    nums[3] -= 60;
    cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << ' ' << nums[3];
    cout << endl;

    int *ip = nums;
    for (int i = 0; i < 4; i++){
        cout << *(ip++) << " ";
    }
    cout << endl;
    int nums2[4];
    ip = nums2;
    for (int i = 0; i < 4; i++){
        cout << *(ip++) << " ";
    }
    cout << endl; 
    for (int i = 0; i < 4; i++){
        cout << nums2[i] << " ";
    }
    cout << endl;
    return 0;
}
