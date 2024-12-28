// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (l * 2 > r)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }
        cout << l << " " << r - (r % l) << endl;
    }

    return 0;
}