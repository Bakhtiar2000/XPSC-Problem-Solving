// https://codeforces.com/problemset/problem/1675/B

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

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;
        bool flag = true;

        for (int i = n - 1; i > 0; i--)
        {
            while (v[i - 1] > 0 && v[i - 1] >= v[i])
            {
                v[i - 1] /= 2;
                cnt++;
            }

            if (v[i - 1] == v[i] || (v[i - 1] == 0 && v[i] == 0))
            {
                flag = false;
                break;
            }
        }

        if (!flag)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}