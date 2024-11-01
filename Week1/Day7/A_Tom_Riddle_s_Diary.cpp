// https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto it = find(v.begin(), v.end(), s);
        if (it == v.end())
        {
            cout << "NO" << '\n';
            v.push_back(s);
        }
        else
            cout << "YES" << '\n';
    }

    return 0;
}