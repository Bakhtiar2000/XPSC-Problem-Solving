// https://codeforces.com/problemset/problem/1863/C

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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> x;

        for (int i = 0; i < n; i++)
            cin >> v[i];

        x = v;
        sort(x.begin(), x.end());
        int m = n;

        for (int i = 0; i < n; i++)
        {
            if (x[i] != i)
            {
                m = i;
                break;
            }
        }

        int temp;
        for (int i = 0; i < n; i++)
        {
            temp = v[i];
            v[i] = m;
            m = temp;
        }
        v.push_back(m);
        int l = (k - 1) % (n + 1);
        for (int i = (n + 1 - l); i < n + 1; i++)
            cout << v[i] << " ";

        for (int i = 0; i < n - l; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}