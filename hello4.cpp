#include <iostream>
using namespace std;

int main() {
  const int MAX_SIZE = 100;
  char input[MAX_SIZE]; // array size is fixed to be 100

  cout << "Who are you? ";
  cin.getline(input, MAX_SIZE); // read at most MAX_SIZE chars or till '\n'

  cout << "What is your age? ";
  int age;
  cin >> age;
  char uni[MAX_SIZE];
  cout << "whats your univercity ?" ;
  cin >> uni;

  cout << "Hello " << input << " your age is  " << age <<"and you are in "<<uni << endl;
  return 0;
}
