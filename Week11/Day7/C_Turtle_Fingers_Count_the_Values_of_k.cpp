// https://codeforces.com/problemset/problem/1933/C

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
        ll a, b, l;
        cin >> a >> b >> l;

        set<int> s;
        for (ll i = 1; i <= l; i *= a)
        {
            for (ll j = 1; j <= l; j *= b)
            {
                if (l % (i * j) == 0)
                    s.insert(l / (i * j));
            }
        }
        cout << s.size() << endl;
    }

    return 0;
}