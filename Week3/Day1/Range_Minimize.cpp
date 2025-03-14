// https://www.codechef.com/problems/MNR

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
        if (n <= 3)
        {
            cout << 0 << '\n';
            continue;
        }
        sort(v.begin(), v.end());
        int option1 = v[n - 1] - v[2];
        int option2 = v[n - 2] - v[1];
        int option3 = v[n - 3] - v[0];

        cout << min({option1, option2, option3}) << '\n';
    }

    return 0;
}