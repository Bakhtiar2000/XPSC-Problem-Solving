// https://codeforces.com/problemset/problem/805/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        (i % 4 == 0 || i % 4 == 1) ? cout << 'a' : cout << 'b';

    return 0;
}