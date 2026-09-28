#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums ,int target){
 	vector<int> ans;
	int n = nums.size();
	for(int i= 0;i<n;i++){
	for (int j = i+1;j<n;j++)
	if (nums[i] + nums[j] == target){
	ans.push_back(i);
	ans.push_back(j);
	return ans;
	}
	}
	return ans;
	}
int main(){
	vector<int> nums = { 3,5,7,8,9,2,1,4};
	int target = 15;
	vector<int>ans = pairsum(nums,target);
	cout << ans[0] <<" , " << ans[1] <<endl;
	}
