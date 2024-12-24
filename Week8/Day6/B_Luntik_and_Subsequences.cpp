// https://codeforces.com/problemset/problem/1582/B

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
        int n;
        cin >> n;

        vector<ll> v(n);
        int zero = 0, one = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zero++;
            if (v[i] == 1)
                one++;
        }
        ll ans = (1LL << zero) * one;
        cout << ans << endl;
    }
    return 0;
}
