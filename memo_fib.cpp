#include <iostream>
using namespace std;

unsigned long long memo[1000];

// Numbering starts from 1
unsigned long long fib(int n)
{
    if (memo[n - 1])
    {

        return memo[n - 1];
    }

    memo[n - 1] = fib(n - 1) + fib(n - 2);
    return memo[n - 1];
}

int main()
{
    int n;

    memo[0] = 1;
    memo[1] = 1;

    cout << "Press 0 to exit\n";

    cout << "\nEnter n : ";
    cin >> n;

    while (n && n > 0)
    {

        cout << "fib (" << n << ") : ";
        cout << fib(n) << endl;

        cout << "\n===================================\n";

        cout << "\nEnter n : ";
        cin >> n;
    }

    return 0;
}