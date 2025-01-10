// https://codeforces.com/problemset/problem/1928/B

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

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        vector<int> v;
        for (auto x : s)
        {
            v.push_back(x);
        }

        int l = 0, r = 0;
        int cnt = 0;

        while (r < v.size())
        {
            ll x = v[r] - v[l];

            while (x >= n && l <= r)
            {
                l++;
                x = v[r] - v[l];
            }

            cnt = max(cnt, r - l + 1);
            r++;
        }
        cout << cnt << endl;
    }

    return 0;
}