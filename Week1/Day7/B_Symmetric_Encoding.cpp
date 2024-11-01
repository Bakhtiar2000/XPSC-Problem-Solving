// https://codeforces.com/contest/1974/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;

        string unique;
        for (int i = 0; i < s.size(); i++)
        {
            auto it = find(unique.begin(), unique.end(), s[i]);
            if (it == unique.end())
            {
                unique.push_back(s[i]);
            }
        }
        sort(unique.begin(), unique.end());
        map<char, char> mp;
        for (int i = 0; i < unique.size(); i++)
        {
            mp[unique[i]] = unique[unique.size() - 1 - i];
        }
        // for (auto [x, y] : mp)
        // {
        //     cout << x << " " << y << '\n';
        // }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = mp[s[i]];
        }
        cout << s << '\n';
    }

    return 0;
}