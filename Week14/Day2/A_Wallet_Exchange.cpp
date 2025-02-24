// https://codeforces.com/problemset/problem/1919/A

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
        int a, b;
        cin >> a >> b;

        int s = abs(a + b);
        if (s % 2 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}