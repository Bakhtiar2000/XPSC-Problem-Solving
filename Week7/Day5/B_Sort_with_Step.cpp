// https://codeforces.com/problemset/problem/1823/B

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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x = abs(v[i] - (i + 1));
            if (x % k)
                count++;
        }

        if (count > 2)
            cout << -1 << endl;
        else if (count == 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}