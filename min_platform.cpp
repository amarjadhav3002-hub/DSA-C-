#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minPlatforms(vector<int>& arr, vector<int>& dep, int n) {
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    int platforms = 0, maxPlatforms = 0;
    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            platforms++;   
            i++;
        } else {
            platforms--; 
            j++;
        }
        if (platforms > maxPlatforms) {
            maxPlatforms = platforms;
        }
    }
    return maxPlatforms;
}
int main() {
    int n;
    cout << "Enter number of trains: ";
    cin >> n;
    vector<int> arr(n), dep(n);
    cout << "Enter arrival times:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter departure times:\n";
    for (int i = 0; i < n; i++) {
        cin >> dep[i];
    }
    int ans = minPlatforms(arr, dep, n);
    cout << "Minimum Platforms Needed: " << ans << endl;
    return 0;
}
