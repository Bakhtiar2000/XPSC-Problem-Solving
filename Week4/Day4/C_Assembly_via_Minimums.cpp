// https://codeforces.com/problemset/problem/1857/C

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
        int m = (n * (n - 1)) / 2, b[m], a[n];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b, b + m);
        int x = 1, index = 0;
        int fromBtoA = n - x;
        while (n - x > 0)
        {
            a[index++] = b[fromBtoA - 1];
            x++;
            fromBtoA += n - x;
        }
        a[n - 1] = 1000000000;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
