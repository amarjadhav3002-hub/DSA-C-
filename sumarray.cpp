#include<iostream>
using namespace std;

int sumarray(int arr[],int size){
int sum =0;
for(int i=0;i <size;i++){
sum =sum +arr[i];
}
return sum;
}

int productarray(int arr[],int size){
  int product =1;
  for(int i=0;i <size;i++){
  product =product *arr[i];
  }
  return product;
  }

int main (){
int arr[] = {2,5,6,7,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
cout << "sum of array is : " << sumarray(arr,size) << endl;
 cout << "product of array is : " << productarray(arr,size) << endl;

return 0 ;

}
