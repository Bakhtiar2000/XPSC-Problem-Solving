// https://www.codechef.com/problems/CHAPD

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

        while (__gcd(a, b) > 1)
            b /= __gcd(a, b);

        if (b > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}