// https://codeforces.com/problemset/problem/1516/B

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

        vector<int> v(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }

        if (x == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        int cnt = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s ^ v[i];
            if (s == x)
            {
                cnt++;
                s = 0;
            }
        }
        cout << (cnt >= 2 ? "YES" : "NO") << endl;
    }

    return 0;
}