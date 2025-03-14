// https://codeforces.com/problemset/problem/1768/B

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

        int x = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == x)
                x++;
        }

        int ans = n - x + k;
        cout << ans / k << endl;
    }

    return 0;
}