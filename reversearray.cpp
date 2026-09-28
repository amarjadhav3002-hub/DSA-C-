#include<iostream>
using namespace std;

void reversearray(int arr[],int start,int end){
   while (start <= end ){
   swap(arr[start],arr[end]);
   start++;
   end--;
   }
}


int main (){
 int arr[] ={ 2,4,6,7,8,5,9};
 int start = 0;
 int end = 6;
 reversearray(arr,start,end);
 cout << "the reversed array is : { ";
 for(int i=0;i<=end;i++){
 cout << arr[i] << " " ;
 }
 cout << " } "<< endl;

 return 0;

 }

