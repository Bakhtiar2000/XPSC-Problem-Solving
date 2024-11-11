// https://www.codechef.com/problems/CHOLY

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, d, l;
    cin >> w >> d >> l;
    float a, b;
    a = w + 0.5 * d;
    b = l + 0.5 * d;
    int match_remaining = 4 - (w + d + l);
    if (match_remaining + a > b)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}