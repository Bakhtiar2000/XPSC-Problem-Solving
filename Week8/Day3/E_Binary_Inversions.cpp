// https://codeforces.com/problemset/problem/1760/E

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

        ll ans = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                one++;
            else
                ans += one;
        }

        ll og = ans;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                index = i;
                break;
            }
        }

        if (index != -1)
        {
            ll tempAns = 0, tempOne = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                    tempOne++;
                else
                    tempAns += tempOne;
            }
            ans = max(ans, tempAns);
            v[index] = 0;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }

        ll tempAns = 0, tempOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                tempOne++;
            else
                tempAns += tempOne;
        }

        ans = max(ans, tempAns);
        cout << ans << endl;
    }

    return 0;
}
