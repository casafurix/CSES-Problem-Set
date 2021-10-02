#include <bits/stdc++.h>

#define ll long long
using namespace std;

//total number of ways to place 2 knights on a k*k chess-board
//for one knight = n^2
//for second knight = n^2 - 1 and so on...
//((n^2)*(n^2-1))/2 (dividing by 2 cuz 2 knights, laws of identical permutations)
//the total number of ways 2 knights can attack each other on an n*n chess-board => 2*3 -> (n-1)*(n-2)
//              => 3*2 -> (n-2)*(n-1)
//For each 2*3 or 3*2 region, there are two ways in which 2 knights can attack each other.
//therefore, total ways = 2 * ((n-1)*(n-2) + (n-2)*(n-1))
//                      = 4 * ((n-1) * (n-2))

int main()
{
    ll N;
    cin >> N;
    for (ll n = 1; n <= N; n++)
    {
        ll totalPositions = (n * n) * (n * n - 1) / 2;
        ll attackPositions = 4 * (n - 1) * (n - 2);
        cout << totalPositions - attackPositions << endl;
    }

    return 0;
}