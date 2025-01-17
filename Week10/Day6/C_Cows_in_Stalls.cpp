// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto ok = [&](ll x)
    {
        int cnt = 1, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] - v[j] >= x)
            {
                cnt++;
                j = i;
            }
        }
        return (cnt >= k);
    };

    ll l = 0, r = 1e10, ans, mid;
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