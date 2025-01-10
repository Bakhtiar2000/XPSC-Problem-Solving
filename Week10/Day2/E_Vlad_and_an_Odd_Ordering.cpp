// https://codeforces.com/problemset/problem/1926/E

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
        ll n, k;
        cin >> n >> k;

        ll cnt = 1;
        ll x = (n + 1) / 2;

        while (x < k)
        {
            k -= x;
            n /= 2;
            x = (n + 1) / 2;
            cnt *= 2;
        }

        ll ans = cnt * (2 * k - 1);
        cout << ans << endl;
    }

    return 0;
}