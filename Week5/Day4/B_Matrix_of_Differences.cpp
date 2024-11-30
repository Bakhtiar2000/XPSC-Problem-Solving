// https://codeforces.com/problemset/problem/1783/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, sm, la, m, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        m = n * n;
        sm = 1;
        la = m;

        ll ans[n + 1][n + 1];

        c = 1;
        for (i = 1; i <= n; i++)
        {
            if ((i % 2) == 1)
            {
                for (j = 1; j <= n; j++)
                {
                    if ((c % 2) == 1)
                    {
                        ans[i][j] = sm;
                        sm++;
                    }
                    else
                    {
                        ans[i][j] = la;
                        la--;
                    }
                    c++;
                }
            }
            else
            {
                for (j = n; j >= 1; j--)
                {
                    if ((c % 2) == 1)
                    {
                        ans[i][j] = sm;
                        sm++;
                    }
                    else
                    {
                        ans[i][j] = la;
                        la--;
                    }
                    c++;
                }
            }
        }

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}