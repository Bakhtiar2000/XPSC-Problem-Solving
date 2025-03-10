// https://cses.fi/problemset/task/1713

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        vector<int> v;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                v.push_back(i);
                if (x / i != i)
                    v.push_back(x / i);
            }
        }
        int ans = v.size();
        cout << ans << endl;
    }

    return 0;
}