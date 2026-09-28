#include<iostream>
using namespace std;
int main(){
	int arr[]={ 1,4,7,3,7,8,9};
	int n= 7;
	for(int st =0;st<n;st++){
	for(int end = st; end<n ;end++){
	for(int i = st;i<=end;i++){
	cout << arr[i] ;
	}
	cout<< " " ;
	}
	cout <<endl;
	}
return 0;
}
