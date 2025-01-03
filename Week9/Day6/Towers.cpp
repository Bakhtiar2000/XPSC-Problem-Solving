// https://cses.fi/problemset/task/1073

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);

        if (it != v.end())
            *it = x;
        else
            v.push_back(x);
    }

    cout << v.size() << endl;

    return 0;
}