// https://codeforces.com/problemset/problem/1722/D

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
        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        ll sum = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                sum += i;
            else
                sum += (n - i - 1);
        }
        int init_sum = sum;

        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] == 'R' && s[j] == 'L')
            {
                i++, j--;
                continue;
            }
            if (s[i] == 'L')
            {
                sum += (j - i);
                v.push_back(sum);
            }
            if (s[j] == 'R')
            {
                sum += (j - i);
                v.push_back(sum);
            }
            i++;
            j--;
        }
        if (sum == init_sum)
        {
            for (int i = 0; i < n; i++)
            {
                cout << sum << " ";
            }
            cout << '\n';
            continue;
        }

        if (!v.empty())
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
        }
        else
            v.push_back(sum);

        int rem = n - v.size();
        while (rem--)
        {
            cout << v.back() << " ";
        }
        cout << '\n';
    }

    return 0;
}