// https://codeforces.com/contest/1873/problem/D

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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int l = 0, r = 0, ans = 0;
        while (r < n)
        {
            bool flag = false;
            if (r - l + 1 == k)
            {
                if (s[l] == 'B')
                {
                    for (int i = l; i <= r; i++)
                    {
                        if (s[i] == 'B')
                        {
                            s[i] = 'W';
                            flag = true;
                        }
                    }
                    l += k;
                    r += k;
                }
                else
                    l++, r++;
            }
            else
                r++;
            if (flag == true)
                ans++;
        }
        for (int i = n - 1; i >= n - k; i--)
        {
            if (s[i] == 'B')
            {
                s[i] = 'W';
                ans++;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}