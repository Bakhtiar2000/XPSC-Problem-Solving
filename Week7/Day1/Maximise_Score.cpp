// https://www.codechef.com/problems/MAXIMSCORE

#include <bits/stdc++.h>
using namespace std;

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
        {
            cin >> v[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x = INT_MIN;
            if (i > 0)
                x = max(x, abs(v[i] - v[i - 1]));
            if (i < n - 1)
                x = max(x, abs(v[i] - v[i + 1]));
            mn = min(mn, x);
        }
        cout << mn << endl;
    }

    return 0;
}
