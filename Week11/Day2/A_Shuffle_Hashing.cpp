// https://codeforces.com/problemset/problem/1278/A

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
        string p, h;
        cin >> p >> h;

        sort(p.begin(), p.end());
        int n = (int)p.size();
        int m = (int)h.size();

        bool flag = false;
        for (int i = 0; i <= m - n; i++)
        {
            string x = h.substr(i, n);
            sort(x.begin(), x.end());

            if (x == p)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}