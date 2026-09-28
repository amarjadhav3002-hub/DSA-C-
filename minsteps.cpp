#include <iostream>
#include <vector>
using namespace std;

int minSteps(int n) {
    vector<int> aa(n + 1);
    aa[1] = 0;
    for (int i = 2; i <= n; i++) {
        aa[i] = aa[i - 1] + 1;   
        if (i % 2 == 0) {
            aa[i] = min(aa[i], aa[i / 2] + 1);
        }
        if (i % 3 == 0) {
            aa[i] = min(aa[i], aa[i / 3] + 1);
        }
    }
    return aa[n];
}
int main() {
    int n;
    cout << "Enter number: ";   
    cin >> n;
    int ans = minSteps(n);
    cout << "Min steps = " << ans << endl; 
    return 0;
}
