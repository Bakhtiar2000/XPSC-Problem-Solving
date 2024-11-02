// https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    map<int, string> mp2;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        mp[x] = i;
        mp2[i] = x;
    }

    vector<int> v;
    for (auto [name, order] : mp)
    {
        v.push_back(order);
    }

    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << mp2[v[i]] << '\n';
    }

    return 0;
}