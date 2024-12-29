// https://codeforces.com/problemset/problem/2040/B

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
        int n;
        cin >> n;

        int x = 1, cnt = 1;
        while (x < n)
        {
            x = (x + 1) * 2;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}