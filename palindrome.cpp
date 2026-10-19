#include <iostream>
using namespace std;
int main() {
  int x = 121;
  string y = to_string(x);
  for (int i = 0, j = y.length() - 1; i < j; i++, j--) {
    if (x[i] != y[j]) {
      cout << "Not a palindrome";
      break;
    } else {
      cout << "palindrome"
    }
  }
  return 0;
}