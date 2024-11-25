// https://codeforces.com/problemset/problem/1927/B

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
        map<int, int> mp, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++, temp[v[i]]++;
        }
        string res;
        for (int i = 0; i < n; i++)
        {
            char ch = 'a' + mp[v[i]] - temp[v[i]];
            res += ch;
            temp[v[i]]--;
        }
        cout << res << '\n';
    }

    return 0;
}