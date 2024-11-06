// https://codeforces.com/problemset/problem/2005/B2

#include <bits/stdc++.h>
using namespace std;
#define ll int int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q, m;
        cin >> n >> m >> q;
        vector<int> v;
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 1; i <= q; i++)
        {
            int x;
            cin >> x;
            if (v[0] < x && v[m - 1] < x)
                cout << abs(v[m - 1] - n) << endl;
            else if (x < v[0] && x < v[m - 1])
                cout << abs(v[0] - 1) << endl;
            else
            {
                int l = lower_bound(v.begin(), v.end(), x) - v.begin();

                int ok1 = abs(x - v[l - 1]) - 1;
                int ok2 = abs(x - v[l]) - 1;
                int min1 = min(ok1, ok2);
                int max1 = max(ok1, ok2);
                max1 -= min1;
                cout << min1 + 1 + max1 / 2 << endl;
            }
        }
    }

    return 0;
}