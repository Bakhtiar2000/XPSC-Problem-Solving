// https://codeforces.com/problemset/problem/1805/A

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
        int n, XOR = 0, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];
        }
        for (int i = 0; i < n; i++)
            v[i] ^= XOR;
        for (int i = 0; i < n; i++)
            ans ^= v[i];

        cout << (ans == 0 ? XOR : -1) << '\n';
    }

    return 0;
}