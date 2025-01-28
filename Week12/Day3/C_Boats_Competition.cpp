// https://codeforces.com/problemset/problem/1399/C

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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        int ans = 0, x = 1;

        while (x <= 100)
        {
            int l = 0, r = n - 1, cnt = 0;

            while (l < r)
            {
                if (v[l] + v[r] == x)
                {
                    cnt++;
                    l++, r--;
                }
                else if (v[l] + v[r] < x)
                    l++;
                else
                    r--;
                ans = max(ans, cnt);
            }
            x++;
        }
        cout << ans << endl;
    }

    return 0;
}