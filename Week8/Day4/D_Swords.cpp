// https://codeforces.com/problemset/problem/1216/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = mx - v[i];
        x = __gcd(x, a[i]);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] / x;
    }

    cout << ans << " " << x << endl;

    return 0;
}