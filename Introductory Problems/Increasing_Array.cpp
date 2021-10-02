#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, diff;
    ll arr[1000000];
    ll sum = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            diff = arr[i - 1] - arr[i];
            arr[i] += diff;
            sum += diff;
        }
    }
    cout << sum;
}
