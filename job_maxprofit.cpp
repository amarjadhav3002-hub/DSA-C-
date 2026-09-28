#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& cpu, vector<int>& profit, int capacity) {
    int n = cpu.size();
    vector<int> dp(capacity + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = capacity; j >= cpu[i]; j--) {
            dp[j] = max(dp[j], profit[i] + dp[j - cpu[i]]);
        }
    }
    return dp[capacity];
}
int main() {
    int n, capacity;
    cout << "Enter number of jobs ; ";
    cin >> n;
    vector<int> cpu(n), profit(n);
    cout << "Enter CPU required for each job:\n";
    for (int i = 0; i < n; i++) {
        cin >> cpu[i];
    }
    cout << "Enter profit for each job:\n";
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    cout << "Enter total CPU capacity: ";
    cin >> capacity;
    cout << "Maximum Profit: " << maxProfit(cpu, profit, capacity) << endl;
    return 0;
}
