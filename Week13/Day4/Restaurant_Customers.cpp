// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        mp[x]++;
        mp[y + 1]--;
    }

    ll sum = 0;
    vector<ll> v;
    for (auto [x, y] : mp)
    {
        sum += y;
        v.push_back(sum);
    }

    sort(v.rbegin(), v.rend());
    cout << v[0] << endl;
    return 0;
}