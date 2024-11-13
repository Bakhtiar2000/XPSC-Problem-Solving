// https://www.codechef.com/problems/MEBA

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
        vector<ll> a(n);
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
                m[a[i]]++;
        }

        if (m.size() == 1 || m.size() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}