#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;

  cout << "Who are you? ";
  getline(cin, name); // read full line including spaces

  cout << "What is your age? ";
  cin >> age; // read integer input

  cout << "Hello " << name << ", you are " << age << " years old." << endl;
  return 0;
}
