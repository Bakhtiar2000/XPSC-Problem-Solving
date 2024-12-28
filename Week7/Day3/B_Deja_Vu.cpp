// https://codeforces.com/problemset/problem/1891/B\

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
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n);
        vector<ll> x;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < q; i++)
        {
            int m;
            cin >> m;
            if (x.empty() || x.back() > m)
                x.push_back(m);
        }

        for (int i = 0; i < n; i++)
        {
            for (int m : x)
            {
                if (v[i] % (1 << m) == 0)
                {
                    int s = m - 1;
                    v[i] += (1 << s);
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}