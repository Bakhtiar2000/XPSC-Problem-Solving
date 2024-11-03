// https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int days = 0;

    for (int i = 0; i < t; i++)
    {
        if (v[i] >= days + 1)
        {
            days++;
        }
    }

    cout << days << '\n';

    return 0;
}
