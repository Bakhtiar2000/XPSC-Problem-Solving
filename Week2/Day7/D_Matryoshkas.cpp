// https://codeforces.com/problemset/problem/1790/D

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
        vector<int> a(n + 5);
        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin() + 1, a.begin() + n + 1);
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int val = a[i];
            if (mp[a[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}