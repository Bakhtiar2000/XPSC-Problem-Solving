// https://codeforces.com/problemset/problem/1256/A

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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        long long max_coins = min(a, s / n);
        long long remaining = s - (max_coins * n);

        remaining <= b ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}