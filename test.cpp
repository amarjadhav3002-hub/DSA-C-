#include <iostream>
using namespace std;

int sum(int n)
{
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        s += i;
    }

    return s;
}

int main()
{
    int n;
    cout << "Sum of numbers from 1 to: ";
    cin >> n;

    int result = sum(n);

    cout << "Sum from 1 to " << n << " is: " << result << endl;

    return 0;
}


