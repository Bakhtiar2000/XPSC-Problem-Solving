// https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
using namespace std;

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
        {
            cin >> v[i];
        }
        vector<int> U(n, 0);
        vector<int> D(n, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            string rotation;
            cin >> x >> rotation;
            for (int j = 0; j < x; j++)
            {
                if (rotation[j] == 'U')
                    U[i]++;
                else
                    D[i]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << (v[i] - U[i] + D[i] + 10) % 10 << ' ';
        }
        cout << '\n';
    }

    return 0;
}