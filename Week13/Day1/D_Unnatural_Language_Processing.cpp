// https://codeforces.com/problemset/problem/1915/D

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
        string s, x;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            if (i > 1)
            {
                if (s[i + 1] == 'a' || s[i + 1] == 'e')
                    x.push_back('.');
            }
            x.push_back(s[i]);
        }
        cout << x << endl;
    }

    return 0;
}