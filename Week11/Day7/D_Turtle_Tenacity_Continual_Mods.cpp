// https://codeforces.com/problemset/problem/1933/D

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

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        if (v[0] != v[1])
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i] % v[0] != 0)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}