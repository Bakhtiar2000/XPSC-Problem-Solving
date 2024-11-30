// https://codeforces.com/problemset/problem/1726/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        if (n > m)
            cout << "NO" << endl;

        else if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "YES" << endl;

            int s = 0;
            for (int i = 1; i <= n - 2; i++)
            {
                cout << 1 << " ";
                s++;
            }

            cout << (m - s) / 2 << " ";
            cout << (m - s) / 2 << endl;
        }

        else if (n % 2 == 1 && m % 2 == 1)
        {
            cout << "YES" << endl;

            int s = 0;
            for (int i = 1; i <= n - 1; i++)
            {
                cout << 1 << " ";
                s++;
            }

            cout << m - s << " ";
            cout << endl;
        }

        else if (n % 2 == 1 && m % 2 == 0)
        {
            cout << "YES" << endl;

            int s = 0;
            for (int i = 1; i <= n - 1; i++)
            {
                cout << 1 << " ";
                s++;
            }

            cout << m - s << " ";
            cout << endl;
        }

        else if (n % 2 == 0 && m % 2 == 1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}