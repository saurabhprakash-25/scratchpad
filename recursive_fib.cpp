#include <iostream>
using namespace std;

// Numbering starts from 1
long long fib(int n)
{
    if (n <= 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;

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