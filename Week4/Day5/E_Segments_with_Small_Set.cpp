// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0, cnt = 0;
    ll ans = 0;
    map<int, int> mp;

    while (r < n)
    {
        if (mp[a[r]] == 0)
            cnt++;
        mp[a[r]]++;
        while (cnt > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                cnt--;
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}
