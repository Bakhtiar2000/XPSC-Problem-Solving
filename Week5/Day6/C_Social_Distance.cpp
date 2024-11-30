// https://codeforces.com/problemset/problem/1367/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = -(k + 1), count = 0;
        while (l < n)
        {
            if (s[l] == '0')
            {
                if (l - r > k)
                {
                    count++;
                    s[l] = '1';
                    r = l;
                }
            }
            else
            {
                if (l - r <= k)
                {
                    s[l] = '0';
                    count--;
                }
                r = l;
            }
            l++;
        }
        cout << count << endl;
    }
    return 0;
}