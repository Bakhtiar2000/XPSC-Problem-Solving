// https://codeforces.com/problemset/problem/1622/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        map<int, int> mp;
        vector<int> ones, zeroes;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = i;
        }
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroes.push_back(a[i]);
            else
                ones.push_back(a[i]);
        }
        sort(zeroes.begin(), zeroes.end(), greater<>());
        sort(ones.begin(), ones.end(), greater<>());
        sort(a, a + n, greater<>());

        int i = 0, j = 0;
        int idx = 0;

        while (i < ones.size() || j < zeroes.size())
        {
            if (i < ones.size())
            {
                b[mp[ones[i]]] = a[idx];
                i++;
            }
            else if (j < zeroes.size())
            {
                b[mp[zeroes[j]]] = a[idx];
                j++;
            }
            idx++;
        }

        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}