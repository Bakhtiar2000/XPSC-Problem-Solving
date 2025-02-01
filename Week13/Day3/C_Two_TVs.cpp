// https://codeforces.com/problemset/problem/845/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll sum = 0;
    bool flag = true;
    for (auto [x, y] : mp)
    {
        sum += y;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}