// https://codeforces.com/problemset/problem/1722/B

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
        int x;
        string a, b;
        cin >> x >> a >> b;
        for (int i = 0; i < x; i++)
        {
            if (a[i] == 'B')
                a[i] = 'G';
            if (b[i] == 'B')
                b[i] = 'G';
        }
        cout << (a == b ? "YES" : "NO") << '\n';
    }
    return 0;
}