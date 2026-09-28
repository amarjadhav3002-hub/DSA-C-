#include <bits/stdc++.h>

using namespace std;

int main() {
  ifstream fp("input.txt");

  if (!fp.is_open()) { // check if the file is opened
    cerr << "error opening the file";
    return 1;
  }

  int num;
  int count = 0;

  while(fp >> num) {
    count++;
    cout << count << ". " << num << endl;
  }

  cout << "Total values read: " << count << endl;

  fp.close(); // close the file
  return 0;
}
