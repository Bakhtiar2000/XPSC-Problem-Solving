// https://codeforces.com/problemset/problem/1337/B

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
        int x, n, m;
        cin >> x >> n >> m;

        int ans = x;
        while (x > 20 && n--)
            ans = ((ans / 2) + 10);
        while (m--)
            ans = (ans - 10);

        cout << (ans > 0 ? "NO" : "YES") << endl;
    }

    return 0;
}