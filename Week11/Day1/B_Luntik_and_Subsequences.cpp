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
        int one = 0, zero = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;

            if (v[i] == 0)
                zero++;
        }

        ll x = (1LL << zero) * one;
        cout << x << endl;
    }

    return 0;
}