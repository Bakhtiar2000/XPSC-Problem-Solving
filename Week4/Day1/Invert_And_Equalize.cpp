// https://www.codechef.com/problems/INVEQ

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
        string s;
        cin >> s;
        int zero = 0, one = 0, i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                while (s[i] == '0')
                    i++;
                zero++;
            }
            else
            {
                while (s[i] == '1')
                    i++;
                one++;
            }
        }
        cout << min(zero, one) << '\n';
    }
    return 0;
}