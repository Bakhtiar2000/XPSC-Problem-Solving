// https://codeforces.com/contest/903/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        res[v[i]]++;
    }

    int max = 1;
    for (auto [x, y] : res)
    {
        if (y > max)
            max = y;
    }
    cout << max << '\n';

    return 0;
}