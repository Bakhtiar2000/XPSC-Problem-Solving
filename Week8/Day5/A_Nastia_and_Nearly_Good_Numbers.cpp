// https://codeforces.com/problemset/problem/1521/A

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
        ll a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << a * b << " " << a << " " << a + (a * b) << endl;
    }

    return 0;
}