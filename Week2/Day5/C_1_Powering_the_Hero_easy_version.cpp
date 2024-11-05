// https://codeforces.com/problemset/problem/1800/C1

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
        {
            cin >> v[i];
        }
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                auto mx = max_element(v.begin(), v.begin() + i);
                total += *mx;
                v.erase(mx);
                i--;
                n--;
            }
        }
        cout << total << '\n';
    }

    return 0;
}