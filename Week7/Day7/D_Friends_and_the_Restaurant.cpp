// https://codeforces.com/problemset/problem/1729/D

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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            v[i] = b[i] - a[i];

        sort(v.rbegin(), v.rend());
        int l = 0, r = n - 1;
        int ans = 0;

        while (l < r)
        {
            if (v[l] > -1 && v[r] > -1)
            {
                ans++;
                l++, r--;
            }
            else if (v[l] < 0 && v[r] < 0)
                break;
            else if (v[l] > -1)
            {
                if (v[l] >= abs(v[r]))
                {
                    ans++;
                    l++, r--;
                }

                else
                    r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}