// https://codeforces.com/problemset/problem/1996/B

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

        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            if (i % k == 0)
            {
                for (int j = 0; j < n; j += k)
                    cout << v[i][j];
                cout << endl;
            }
        }
    }

    return 0;
}