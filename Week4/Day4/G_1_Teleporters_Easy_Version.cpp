// https://codeforces.com/problemset/problem/1791/G1

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
        int n, c;
        cin >> n >> c;
        vector<int> v(n), costs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            costs[i] = v[i] + (i + 1);
        }
        sort(costs.begin(), costs.end());

        int used = 0;
        for (int cost : costs)
        {
            if (c >= cost)
            {
                c -= cost;
                used++;
            }
            else
                break;
        }

        cout << used << '\n';
    }

    return 0;
}