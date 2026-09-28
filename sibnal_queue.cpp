#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
ll minWait(vector<int>& vehicles, int k) {
    priority_queue<ll> pq;
    ll totalWait = 0;
    ll totalVehicles = 0;
    for (int v : vehicles) {
        pq.push(v);
        totalVehicles += v;
    }while (!pq.empty()) {
        ll curr = pq.top();
        pq.pop();
        ll removed = min(curr, (ll)k);
        curr -= removed;
        totalVehicles -= removed;
        totalWait += totalVehicles;
        if (curr > 0) {
            pq.push(curr);
        }
    }
    return totalWait;
}
int main() {
    int n, k;
    cout << "Enter number of signals : ";
    cin >> n;
    cout << "Enter vehicles cleared per step: ";
    cin >> k;
    vector<int> vehicles(n);
    cout << "Enter vehicles in each signal:\n";
    for (int i = 0; i < n; i++) {
        cin >> vehicles[i];
    }
    cout << "Minimum Waiting Time: " << minWait(vehicles, k) << endl;
    return 0;
}
