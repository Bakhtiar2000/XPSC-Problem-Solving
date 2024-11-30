// https://codeforces.com/problemset/problem/1993/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll odd = 0, even = 0, mxOdd = 0, mxEven = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                even++;
                mxEven = max(mxEven, v[i]);
            }
            else
            {
                odd++;
                mxOdd = max(mxOdd, v[i]);
            }
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0 && v[i] < mxOdd)
            {
                mxOdd += v[i];
            }
        }

        if (odd == 0 || even == 0)
            cout << 0 << endl;

        else if (mxEven < mxOdd)
            cout << even << endl;

        else
            cout << even + 1 << endl;
    }
    return 0;
}