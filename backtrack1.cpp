#include <iostream>
using namespace std;

void backtrack(string A[], int n, int index, char result[], int r) {
    if (index == n) {
        result[r] = '\0';
        cout << result << endl;
        return;
    }
    for (int i = 0; i < A[index].size(); i++) {
        result[r] = A[index][i];      
        backtrack(A, n, index + 1, result, r + 1); 
    }
}
int main() {
    string A[] = {"ab", "cd"};
    int n = 2;
    char result[10];
    backtrack(A, n, 0, result, 0);
    return 0;
}
