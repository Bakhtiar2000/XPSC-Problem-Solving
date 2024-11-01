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
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (res.find(v[i]) != res.end())
        {
            res[v[i]]++;
        }
        else
            res[v[i]] = 1;
    }
    int max = 1;
    for (auto [x, y] : res)
    {
        if (y > max)
            max += y - 1;
    }
    cout << max << '\n';

    return 0;
}