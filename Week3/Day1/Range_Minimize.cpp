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
        sort(v.begin(), v.end());

        int mx1 = *max_element(v.begin() + 2, v.end());
        int mn1 = *min_element(v.begin() + 2, v.end());

        int mx2 = *max_element(v.begin(), v.end() - 2);
        int mn2 = *min_element(v.begin(), v.end() - 2);
        cout << min(mx1 - mn1, mx2 - mn2) << '\n';
    }

    return 0;
}