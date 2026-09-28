#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int long_subseq(vector<int>& prices){
    vector<int> temp;
    for(int x:prices){
        auto it=lower_bound(temp.begin(),temp.end(),x);
        if(it==temp.end()) temp.push_back(x);
        else *it=x;
    }
    return temp.size();
}

int main(){
    int n;
    cout<<"Enter number of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter stock prices:\n";
    for(int i=0;i<n;i++) cin>>prices[i];
    cout<<"Length of longest sub sequence: "<<long_subseq(prices)<<endl;
    return 0;
}
