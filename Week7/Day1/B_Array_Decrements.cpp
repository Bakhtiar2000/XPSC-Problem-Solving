// https://codeforces.com/problemset/problem/1690/B

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        bool x = true;
        int maxDiff = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < b[i])
                x = false;
            maxDiff = max(maxDiff, a[i] - b[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            if (b[i] > 0 && a[i] - b[i] != maxDiff)
                x = false;
            if (b[i] == 0 && a[i] > maxDiff)
                x = false;
        }
        x ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}