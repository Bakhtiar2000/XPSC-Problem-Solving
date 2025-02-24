// https://codeforces.com/problemset/problem/1520/D

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
        map<int, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i] - (i + 1)]++;
        }

        ll sum = 0;
        for (auto [x, y] : mp)
        {
            sum += y * (y - 1) / 2;
        }
        cout << sum << endl;
    }

    return 0;
}