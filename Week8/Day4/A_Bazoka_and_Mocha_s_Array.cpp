// https://codeforces.com/problemset/problem/1975/A

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
                cnt++;
        }

        if (cnt == 0 || (cnt == 1 && v[0] >= v[n - 1]))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}