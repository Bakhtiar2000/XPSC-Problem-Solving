// https://codeforces.com/problemset/problem/1974/C

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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<pair<int, int>, int> mp1, mp2, mp3;
        map<vector<int>, int> mp;
        ll ans = 0;

        for (int i = 0; i < n - 2; i++)
        {
            ans += mp1[{v[i], v[i + 1]}]++;
            ans += mp2[{v[i + 1], v[i + 2]}]++;
            ans += mp3[{v[i + 2], v[i]}]++;

            vector<int> x = {v[i], v[i + 1], v[i + 2]};
            ans -= 3 * mp[x]++;
        }
        cout << ans << endl;
    }

    return 0;
}