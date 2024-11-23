// https://codeforces.com/problemset/problem/1729/B

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
        int a;
        string s;
        cin >> a >> s;

        int i = 0;
        string res;
        while (i < a)
        {
            if (i + 2 < a && s[i + 2] == '0' && s[i + 3] != '0')
            {
                int val = (s[i] - '0') * 10 + (s[i + 1] - '0');
                res += val - 1 + 'a';
                i += 3;
            }
            else
            {
                res += (s[i] - '1') + 'a';
                i++;
            }
        }
        cout << res << '\n';
    }

    return 0;
}