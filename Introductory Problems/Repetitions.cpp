#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long count = 1;
    long ans = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = max(count, ans);
    }
    cout << ans;
}