// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a != b)
        cout << max(a, b) + max(a, b) - 1 << '\n';
    else
        cout << a + b << '\n';
    return 0;
}