#include <iostream>
using namespace std;

int main() {
  bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
  bool floats = sizeof(float) == 0.5 * sizeof(double);
  bool chars = sizeof(char) == 1;
  int v = ints && floats && chars;
  cout << v << endl;

  return 0;
}
