// https://codeforces.com/problemset/problem/1883/B

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
        int size, remove;
        string s;
        cin >> size >> remove >> s;

        map<char, int> mp;
        int odd_count = 0;

        for (int i = 0; i < size; i++)
        {
            mp[s[i]]++;
        }
        for (auto [key, value] : mp)
        {
            if (value % 2 != 0)
                odd_count++;
        }

        int min_remove = odd_count - 1;
        cout << (remove >= min_remove ? "YES" : "NO") << '\n';
    }

    return 0;
}