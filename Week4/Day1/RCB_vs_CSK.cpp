// https://www.codechef.com/problems/RCBCSK

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int rcb, csk;
    cin >> rcb >> csk;
    (rcb - csk >= 18) ? cout << "RCB" << '\n' : cout << "CSK" << '\n';

    return 0;
}