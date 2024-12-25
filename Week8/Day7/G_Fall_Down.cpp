// https://codeforces.com/problemset/problem/1669/G

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
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < m; i++)
        {
            int x = n - 1;

            for (int j = n - 1; j >= 0; j--)
            {
                if (v[j][i] == '*')
                {
                    v[j][i] = '.';
                    v[x][i] = '*';
                    x--;
                }

                else if (v[j][i] == 'o')
                    x = j - 1;
            }
        }

        for (auto x : v)
            cout << x << endl;
    }

    return 0;
}