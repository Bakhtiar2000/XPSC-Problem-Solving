// https://codeforces.com/problemset/problem/2003/B

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
        cout << v[n / 2] << endl;
    }

    return 0;
}