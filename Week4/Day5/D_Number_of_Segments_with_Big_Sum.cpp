// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= k && l <= r)
        {
            sum -= a[l];
            l++;
        }
        ans += l;
        r++;
    }

    cout << ans << '\n';

    return 0;
}
