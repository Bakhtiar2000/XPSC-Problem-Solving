// https://codeforces.com/problemset/problem/1692/E

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
        int n, s, total = 0;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }

        if (total < s)
            cout << -1 << endl;
        else if (total == s)
            cout << 0 << endl;
        else
        {
            int l = 0, r = 0;
            int sum = 0, mx = 0;

            while (r < n)
            {
                sum += v[r];
                if (sum == s)
                    mx = max(mx, r - l + 1);
                while (sum > s)
                {
                    sum -= v[l];
                    l++;
                }
                if (sum == s)
                    mx = max(mx, r - l + 1);
                r++;
            }
            cout << n - mx << endl;
        }
    }

    return 0;
}