// https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), cnt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos - 1] << '\n';
    }

    return 0;
}