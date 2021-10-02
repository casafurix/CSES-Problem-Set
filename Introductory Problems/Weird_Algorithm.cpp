#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void weird(long long n)
{
    cout << n << " ";

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << " " << n << " ";
        }
        else
        {
            n = 3 * n + 1;
            cout << n;
        }
    }
}

int main()
{
    long long n;
    cin >> n;

    weird(n);
    return 0;
}
