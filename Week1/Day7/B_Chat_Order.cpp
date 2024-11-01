// https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        auto it = find(s.begin(), s.end(), x);
        if (it != s.end())
        {
            s.erase(it);
            s.push_back(x);
        }
        else
            s.push_back(x);
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i] << '\n';
    }

    return 0;
}

// Could not