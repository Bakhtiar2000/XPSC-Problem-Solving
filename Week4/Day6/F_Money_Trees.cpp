// https://codeforces.com/problemset/problem/1873/F

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll l = 0, r = 0, sum = 0, ans = 0;
        while (r < n)
        {
            if (r > 0 && b[r - 1] % b[r] != 0)
            {
                l = r;
                sum = 0;
            }
            sum += a[r];
            if (sum <= k)
                ans = max(ans, r - l + 1);
            while (sum > k && l <= r)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= k)
                ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}