#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[] = {2,-4,6,-6,7,-9,4,5,-6};
int n = sizeof(arr)/sizeof(arr[0]);
int maxsum = INT_MIN;
int currsum = 0;

for (int i =0;i<n;i++){
currsum += arr[i];
maxsum = max(currsum,maxsum);
if(currsum <0){
currsum = 0;
}
}
cout <<"maximum sum of subarray is :" <<maxsum<<endl;
return 0;
}

