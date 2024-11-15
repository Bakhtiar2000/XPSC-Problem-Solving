// https://codeforces.com/problemset/problem/1843/B

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
        ll sum = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        int op = 0, r = 0;
        while (r < n)
        {
            if (v[r] < 0)
            {
                int curr = v[r];
                while (curr <= 0)
                {
                    if (r < n - 1)
                        curr = v[r + 1];
                    else
                        curr = 1;
                    r++;
                }
                op++;
            }
            else
                r++;
        }
        cout << sum << " " << op << '\n';
    }

    return 0;
}