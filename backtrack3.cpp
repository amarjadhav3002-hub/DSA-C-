#include <iostream>
#include <algorithm>
using namespace std;

void BAcktrack(int arr[], int n, int target, int index, int curr[], int size) {
    if (target == 0) {
        for (int i = 0; i < size; i++)
            cout << curr[i] << " ";
        cout << endl;
        return;
   }
    for (int i = index; i < n; i++) {
        if (i > index && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        curr[size] = arr[i];  
        BAcktrack(arr, n, target - arr[i], i + 1, curr, size + 1); 
    }
}
int main() {
    int arr[] = {10,1,2,7,6,1,5};
    int n = 7;
    int target = 8;
    sort(arr, arr + n);   
    int curr[10];
	cout << "Below are candidates whose sum is 8 : " <<endl;
    BAcktrack(arr, n, target, 0, curr, 0);
    return 0;
}
