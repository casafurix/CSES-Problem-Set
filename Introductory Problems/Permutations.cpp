#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    string str1;
    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        else
        {
            str1 += to_string(i) + " ";
        }
    }
    cout << str1;
    return 0;
}