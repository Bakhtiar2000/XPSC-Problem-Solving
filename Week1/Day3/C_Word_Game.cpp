// https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;

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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        // -------------- For 2nd test case --------------
        // mp[orz] = [1, 2] // key is a string and value is a vector
        // mp[for] = [1, 2, 3]
        // mp[qaq] = [1, 2]
        // mp[cod] = [3]
        // mp[ces] = [3]

        vector<int> ans(4);

        for (auto [x, y] : mp)
        {
            vector<int> v = y;
            if (v.size() == 1)
            {
                // Let's consider this value: mp[cod] = [3] where v.size() == 1
                ans[v[0]] += 3; // ans[3] gains 3 points
            }
            if (v.size() == 2)
            {
                // Let's consider this value: mp[qaq] = [1, 2] where v.size() == 2
                ans[v[0]]++; // ans[1] gains 1 point
                ans[v[1]]++; // ans[2] gains 1 point
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}