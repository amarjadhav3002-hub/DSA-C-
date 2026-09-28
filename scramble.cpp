#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<vector<int>>> dp;

    bool isSameFreq(string &a, string &b) {
        vector<int> count(26, 0);
        for (int i = 0; i < a.length(); i++) {
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
        }
        for (int x : count) {
            if (x != 0) return false;
        }
        return true;
    }

    bool solve(string &s1, string &s2, int i, int j, int len) {

        if (dp[i][j][len] != -1)
            return dp[i][j][len];

        if (s1.substr(i, len) == s2.substr(j, len))
            return dp[i][j][len] = 1;
        string a = s1.substr(i, len);
        string b = s2.substr(j, len);
        if (!isSameFreq(a, b))
            return dp[i][j][len] = 0;
        for (int k = 1; k < len; k++) {
            if (solve(s1, s2, i, j, k) &&
                solve(s1, s2, i + k, j + k, len - k))
                return dp[i][j][len] = 1;

            if (solve(s1, s2, i, j + len - k, k) &&
                solve(s1, s2, i + k, j, len - k))
                return dp[i][j][len] = 1;
        }
        return dp[i][j][len] = 0;
    }

    bool isScramble(string s1, string s2) {
        int n = s1.length();
        if (n != s2.length()) return false;
        dp.resize(n, vector<vector<int>>(n, vector<int>(n + 1, -1)));
        return solve(s1, s2, 0, 0, n);
    }
};

int main() {
    Solution obj;
	string A, B;
	cout << "Enter first string: ";
	cin >> A;
	cout << "Enter second string: "; 
	cin >> B;
    if (obj.isScramble(A, B))
        cout << "Yes, it is a scramble string\n";
    else
        cout << "No, it is NOT a scramble string\n";
    return 0;
}
