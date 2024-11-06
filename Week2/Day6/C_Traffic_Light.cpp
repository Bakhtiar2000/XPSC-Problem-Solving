// https://codeforces.com/problemset/problem/1744/C

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
        string x, s;
        cin >> x >> s;
        s += s;
        bool f = false;
        int count = 0, res = 0;

        if (x[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, count);
                f = false;
            }

            if (s[i] == x[0] and f == false)
            {
                f = true;
                count = 0;
            }

            if (f)
                count++;
        }

        cout << res << endl;
    }
    return 0;
}