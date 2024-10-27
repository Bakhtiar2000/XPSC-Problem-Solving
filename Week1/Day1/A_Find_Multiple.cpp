// https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = (a + c - 1) / c;
    int res = x * c;

    if (res >= a && res <= b)
        cout << res << endl;
    else
        cout << -1 << endl;

    return 0;
}
