// https://codeforces.com/problemset/problem/1430/C

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
        cout << 2 << endl;
        int a = n, b = n - 1;
        for (int i = 1; i < n; i++)
        {
            cout << a << " " << b << endl;
            a = (a + b + 1) / 2;
            b--;
        }
    }

    return 0;
}