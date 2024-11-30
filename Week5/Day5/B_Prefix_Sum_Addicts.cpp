// https://codeforces.com/problemset/problem/1738/B

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
        int n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];

        bool flag = true;
        ll m = v[k - 1] - v[k - 2];

        for (int i = k - 2; i > 0; i--)
        {
            if (v[i] - v[i - 1] > m)
            {
                flag = false;
                break;
            }
            else
                m = v[i] - v[i - 1];
        }

        if (k == 1)
            cout << "Yes" << endl;

        else if (flag)
        {
            ll s = 0;
            s = (n - k + 1) * m;

            if (s >= v[0])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}