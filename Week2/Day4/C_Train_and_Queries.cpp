// https://codeforces.com/problemset/problem/1702/C

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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0; i < m; i++)
        {
            int left, right;
            cin >> left >> right;
            if ((mp.find(left) == mp.end()) || (mp.find(right) == mp.end()))
                cout << "NO" << '\n';
            else
            {
                int startIndex, endIndex;
                startIndex = *mp[left].begin();
                endIndex = *mp[right].rbegin();
                cout << (startIndex < endIndex ? "YES" : "NO") << '\n';
            }
        }
    }
    return 0;
}