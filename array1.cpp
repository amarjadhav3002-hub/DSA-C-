#include<iostream>
#include<climits>
using namespace std;

int smallestinarray(int arr[],int size){
	int smallest = INT_MAX;
	for(int i =0; i<size ;i++){
	if(arr[i] < smallest){
	smallest = arr[i];
	}
}
return smallest;
}
int main(){
	int arr[] = {12,29,30,10,5};
	int smallest = 	smallestinarray(arr,5);
	for (int i =0;i<5 ;i++){
	if(smallest == arr[i]){
	cout << i << endl;
}
}
}

