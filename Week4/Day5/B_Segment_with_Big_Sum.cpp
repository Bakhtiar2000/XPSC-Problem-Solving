// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            // cout << "l[" << l << "]= " << v[l] << " && r[" << r << "]= " << v[r] << ",s=" << sum << ",a=" << ans << '\n';
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}