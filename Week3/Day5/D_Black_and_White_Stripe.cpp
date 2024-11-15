// https://codeforces.com/problemset/problem/1690/D

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

        int l = 0, r = 0, ans = INT_MAX, w = 0;
        while (r < n)
        {
            if (r - l + 1 == k)
            {
                if (s[r] == 'W')
                    w++;
                ans = min(ans, w);
                if (s[l] == 'W')
                    w--;
                l++, r++;
            }
            else
            {
                if (s[r] == 'W')
                    w++;
                r++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}