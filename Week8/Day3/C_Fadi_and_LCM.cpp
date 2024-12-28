// https://codeforces.com/problemset/problem/1285/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll input;
    cin >> input;

    ll ans = input;
    for (ll i = 2; i * i <= input; i++)
    {
        if (input % i == 0)
        {
            ll s = __gcd(i, input / i);
            if (s == 1)
            {
                ll b = max(i, input / i);
                ans = min(ans, b);
            }
        }
    }

    if (ans == input)
        cout << 1 << " " << input << endl;
    else
        cout << ans << " " << input / ans << endl;

    return 0;
}