// https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll l, r;
    cin >> l >> r;

    ll c = (r - l + 1) / 2;

    if (c == 0)
        cout << "NO" << endl;

    else
    {
        cout << "YES" << endl;
        ll i = l;
        while (c--)
        {
            cout << i << " " << i + 1 << endl;
            i += 2;
        }
    }

    return 0;
}
