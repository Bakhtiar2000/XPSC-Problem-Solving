// https://codeforces.com/problemset/problem/1714/B

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
        set<int> values;

        for (int i = n - 1; i >= 0; i--)
        {
            if (values.count(v[i]))
            {
                cout << i + 1 << endl;
                break;
            }
            values.insert(v[i]);
        }
        if (values.size() == n)
            cout << 0 << endl;
    }

    return 0;
}
