// https://codeforces.com/problemset/problem/1104/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = (int)s.size();
    vector<char> v;
    v.push_back(s[0]);
    int cnt = 0;

    for (int i = 1; i < len; i++)
    {
        if (!v.empty() && v.back() == s[i])
        {
            cnt++;
            v.pop_back();
        }
        else
            v.push_back(s[i]);
    }
    cout << (cnt % 2 == 1 ? "Yes" : "No") << endl;

    return 0;
}