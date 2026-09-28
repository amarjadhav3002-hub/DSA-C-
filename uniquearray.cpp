#include<iostream>
using namespace std;
int main(){
int size;
cout<< "enter the size :";
cin >> size;
int arr[10];
cout <<"Enter at most 10 numbers : ";
for (int i = 0;i< size;i++){
cin >> arr[i];
}
for(int i=0;i<size;i++){
int count =0;
for (int j=0;j<size;j++){
if (arr[i] == arr[j]){
count ++;
}
}
if(count ==1){
cout <<"Unique elements in array are : " << arr[i] <<endl;
}

}
return 0;
}
