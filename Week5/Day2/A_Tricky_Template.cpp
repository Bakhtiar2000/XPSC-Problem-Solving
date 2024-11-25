// https://codeforces.com/problemset/problem/1922/A

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
        string a, b, c;
        cin >> n >> a >> b >> c;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == b[i] && a[i] != c[i]) ||
                (a[i] != b[i] && a[i] != c[i] && b[i] != c[i]))
            {
                cout << "YES" << '\n';
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO" << '\n';
    }

    return 0;
}