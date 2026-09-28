#include <iostream>
#include <vector>
#include <string>
using namespace std;
string simplify(string B) {
    string res;
    for (char c : B) {
        if (c == '*' && !res.empty() && res.back() == '*')
            continue;
        res += c;
    }
    return res;
}

int isMatch(string A, string B) {
    B = simplify(B); 

    int strLen = A.length();
    int patLen = B.length();

    vector<vector<bool>> table(strLen + 1, vector<bool>(patLen + 1, false));
    table[0][0] = true;
    for (int j = 1; j <= patLen; j++) {
        if (B[j - 1] == '*')
            table[0][j] = table[0][j - 1];
        else
            break;
    }
    for (int i = 1; i <= strLen; i++) {
        for (int j = 1; j <= patLen; j++) {

            if (B[j - 1] == A[i - 1] || B[j - 1] == '?') {
                table[i][j] = table[i - 1][j - 1];
            }
            else if (B[j - 1] == '*') {
                table[i][j] = table[i][j - 1] || table[i - 1][j];
            }
        }
    }
    return table[strLen][patLen] ? 1 : 0;
}

int main() {
    string source, pattern;
    cout << "Enter the string : ";
    cin >> source;
    cout << "ENter the pattern: ";
    cin >> pattern;
    cout << "Result: " << isMatch(source, pattern) << endl;
    return 0;
}
