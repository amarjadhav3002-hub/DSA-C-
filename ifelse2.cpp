#include <iostream>

/*
  Read a number
  Print "Non-Negative" if the input is positive or zero
  Otherwise Print "Negative"
*/

using namespace std;

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  if (number >= 0) {
    cout << "Non-Negative" << endl;
  }
  else {
    cout << "Negative number" << endl;
  }

  return 0;
}
