// https://codeforces.com/problemset/problem/678/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll lcm = (a / __gcd(a, b)) * b;
    ll overlap = (n / lcm);

    ll x = ((n / a) - overlap) * p, y = ((n / b) - overlap) * q;
    ll ans = (x + y + overlap * max(p, q));

    cout << ans << '\n';

    return 0;
}
