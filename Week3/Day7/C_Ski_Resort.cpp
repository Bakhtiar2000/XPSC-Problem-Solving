#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int plus_factorial(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    return n + plus_factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll ans = 0;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                cnt++;
            else
            {
                if (cnt >= k)
                    ans += (cnt * 1LL * (cnt + 1)) / 2 - ((k - 1) * cnt - ((k - 2) * (k - 1)) / 2);
                cnt = 0;
            }
        }
        if (cnt >= k)
            ans += (cnt * 1LL * (cnt + 1)) / 2 - ((k - 1) * cnt - ((k - 2) * (k - 1)) / 2);

        cout << ans << '\n';
    }

    return 0;
}
