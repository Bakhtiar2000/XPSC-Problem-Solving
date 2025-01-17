// https://codeforces.com/problemset/problem/2049/C

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
        int n, x, y;
        cin >> n >> x >> y;
        x--, y--;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            v[(x + i) % n] = i % 2;

        if (n % 2 != 0 || !abs(x - y) % 2)
            v[x] = 2;

        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}