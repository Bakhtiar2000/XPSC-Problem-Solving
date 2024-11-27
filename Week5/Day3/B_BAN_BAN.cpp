// https://codeforces.com/problemset/problem/1747/B

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
        int m, size = 3 * n;
        if (size % 2 == 0)
            m = size / 6;
        else
            m = (size + 3) / 6;
        cout << m << '\n';
        if (size % 2 == 0)
        {
            int x = 2, y = 6;
            for (int i = 0; i < n / 2; i++)
            {
                cout << x << " " << y << " ";
                x += 6, y += 6;
            }
        }
        else
        {
            cout << 1 << " " << 2 << " ";
            int x = 5, y = 9;
            for (int i = 0; i < n / 2; i++)
            {
                cout << x << " " << y << " ";
                x += 6, y += 6;
            }
        }
        cout << '\n';
    }

    return 0;
}