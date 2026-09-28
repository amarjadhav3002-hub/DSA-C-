#include<iostream>
using namespace std;
int main(){
	int year;
	cout << "Enter the positive number(year) ";
	cin >> year;
	if(year <= 0) {
	cout << " Please enter the positive number "  << endl;
	return 1;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "yes";
    } else {
        cout << "no";
    }
	}
