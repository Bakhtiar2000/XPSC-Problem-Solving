// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto ok = [&](ll x)
    {
        ll s = 0;
        for (int i = 0; i < n; i++)
            s += min(x, v[i]);
        return ((s / x) >= k);
    };

    ll l = 1, r = 5e10, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;

    return 0;
}