// https://codeforces.com/problemset/problem/276/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());

    vector<int> x(n + 1);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        x[l]++;
        x[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
        x[i] = x[i - 1] + x[i];
    sort(x.rbegin(), x.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (1LL * v[i] * x[i]);
    cout << ans << endl;

    return 0;
}