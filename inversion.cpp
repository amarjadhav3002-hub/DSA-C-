#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll merge(vector<int>& arr,int l,int mid,int r){
    int i=l,j=mid+1;
    vector<int> temp;
    ll inv=0;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            inv += (mid - i + 1);
            j++;
        }
    }
    while(i<=mid){ temp.push_back(arr[i]); i++; }
    while(j<=r){ temp.push_back(arr[j]); j++; }
    for(int k=l;k<=r;k++) arr[k]=temp[k-l];
    return inv;
}
ll mergeSort(vector<int>& arr,int l,int r){
    ll inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,r);
        inv += merge(arr,l,mid,r);
    }
    return inv;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Number of inversions: "<<mergeSort(arr,0,n-1)<<endl;
    return 0;
}
