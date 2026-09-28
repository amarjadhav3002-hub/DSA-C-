#include <iostream>
using namespace std;

void solve(int start, int n, int k, int curr[], int size) {
    if (size == k) {
        for (int i = 0; i < k; i++)
            cout << curr[i] << " ";
        cout << endl;
        return;
    }
	//possible numbers through the loop 
    for (int i = start; i <= n; i++) {
        curr[size] = i;                  
        solve(i + 1, n, k, curr, size + 1);
    }
}
int main() {
    int n = 4, k = 2;
    int curr[10];   
	cout<<"Combination of all elements in sorted form : " << endl;
    solve(1, n, k, curr, 0);
    return 0;
}
