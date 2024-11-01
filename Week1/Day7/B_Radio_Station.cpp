// https://codeforces.com/contest/918/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string command, ipWithSemicolon;
        cin >> command >> ipWithSemicolon;
        string ip = ipWithSemicolon.substr(0, ipWithSemicolon.size() - 1);
        cout << command << " " << ipWithSemicolon << " #" << mp[ip] << '\n';
    }

    return 0;
}
