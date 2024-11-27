// https://codeforces.com/problemset/problem/1806/B

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
        int zero = 0;
        int greater = 0;
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                zero++;
            else if (x == 1)
                one = 1;
            else if (x > 1)
                greater = 1;
        }

        int notZero = n - zero;
        if (zero > notZero + 1)
        {
            if (one == 0)
                cout << 1 << endl;
            else
            {
                if (greater)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
        }
        else
            cout << 0 << endl;
    }

    return 0;
}