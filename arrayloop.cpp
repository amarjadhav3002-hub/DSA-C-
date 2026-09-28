#include<iostream>
using namespace std;

void changearr(int arr[],int size){
	for (int i = 0; i<size; i++){
	arr[i]= 2*arr[i];
	}
}

int main(){
	int arr[] = {1,2,3,4};
	
	changearr(arr,4);
	for (int i = 0; i<4; i++){
       	
	cout << arr[i] << endl;
}
	return 0;
}
