// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n / 100 > 10)
        cout << n << '\n';
    else if (n / 10 > 10)
        cout << "0" << n << '\n';
    else if (n > 10)
        cout << "00" << n << '\n';
    else
        cout << "000" << n << '\n';

    return 0;
}