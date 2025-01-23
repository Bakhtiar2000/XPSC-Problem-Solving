// https://codeforces.com/problemset/problem/1850/F

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

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= n)
                mp[v[i]]++;
        }

        vector<int> freq(n + 1, 0);
        for (auto [x, y] : mp)
        {
            for (int i = x; i <= n; i += x)
                freq[i] += y;
        }

        int mx = 0;
        for (auto x : freq)
            mx = max(mx, x);
        cout << mx << endl;
    }

    return 0;
}