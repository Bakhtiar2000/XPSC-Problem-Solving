// https://codeforces.com/problemset/problem/1935/A

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
        string s, x;
        cin >> s;

        x = s;
        reverse(x.begin(), x.end());
        x += s;
        cout << min(s, x) << endl;
    }

    return 0;
}