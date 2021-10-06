#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES"
             << "\n";
        set<ll> s1, s2;
        ll target = sum / 2;
        ll t = n;
        for (int i = 1; i <= n; i++)
        {
            s1.insert(i);
        }
        while (s1.count(target) == 0)
        {
            target -= t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }
        s1.erase(target);
        s2.insert(target);
        cout << s1.size() << "\n";
        for (int z : s1)
            cout << z << " ";
        cout << "\n"
             << s2.size() << "\n";
        for (int z : s2)
            cout << z << " ";
    }

    return 0;
}