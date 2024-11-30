// https://codeforces.com/problemset/problem/1421/A

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
        int a, b, XOR;
        cin >> a >> b;

        XOR = a ^ b;
        cout << XOR << endl;
    }
    return 0;
}