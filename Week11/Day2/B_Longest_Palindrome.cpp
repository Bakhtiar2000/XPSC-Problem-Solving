// https://codeforces.com/problemset/problem/1304/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    string s = "";
    for (int i = 0; i < n; i++)
    {
        string x = v[i];
        reverse(x.begin(), x.end());

        for (int j = i + 1; j < n; j++)
        {
            if (x == v[j])
                s += v[i];
        }
    }

    string md;
    for (int i = 0; i < n; i++)
    {
        string x = v[i];
        reverse(x.begin(), x.end());
        if (x == v[i])
        {
            md = v[i];
            break;
        }
    }

    string ed = s;
    reverse(ed.begin(), ed.end());
    string ans = s + md + ed;

    cout << (int)ans.size() << endl;
    cout << ans << endl;

    return 0;
}