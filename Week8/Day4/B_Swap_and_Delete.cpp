// https://codeforces.com/problemset/problem/1913/B

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
        string s;
        cin >> s;
        int zeros = 0, ones = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                ones++;
            else
                zeros++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zeros > 0)
                    zeros--;
                else
                    break;
            }
            else
            {
                if (ones > 0)
                    ones--;
                else
                    break;
            }
        }

        cout << ones + zeros << endl;
    }

    return 0;
}