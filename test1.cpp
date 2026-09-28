#include <iostream>
using namespace std;
int sumofdigit(int n){
	int sum =0;
	while(n > 0 ){
	int num = n % 10;
	sum +=num;
	n= n/10;
	}
	return sum;
}
int main (){
	cout <<sumofdigit(145) <<endl;
	return 0;
	}
