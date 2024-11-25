// https://codeforces.com/problemset/problem/1948/A

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
        if (n % 2 == 1)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << endl;
            string res;
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                    res += "AA";
                else
                    res += "BB";
            }
            cout << res << endl;
        }
    }
    return 0;
}