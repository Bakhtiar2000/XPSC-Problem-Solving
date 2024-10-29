// https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    float t;
    cin >> a >> b >> t;

    int x = (t + 0.5) / a;
    cout << x * b << '\n';
    return 0;
}