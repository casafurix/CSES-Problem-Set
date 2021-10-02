#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long arr[n];
    long sum = 0;
    for (long i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (long i = 0; i < n - 1; i++)
    {

        sum += arr[i];
    }
    long total = (n * (n + 1)) / 2;
    long ans = total - sum;
    cout << ans;
}