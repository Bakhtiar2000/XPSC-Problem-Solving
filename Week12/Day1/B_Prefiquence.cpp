// https://codeforces.com/problemset/problem/1968/B

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
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int l = 0, x = 0;
        while (l < m)
        {
            if (a[x] == b[l])
                x++;
            l++;
        }
        cout << x << endl;
    }

    return 0;
}