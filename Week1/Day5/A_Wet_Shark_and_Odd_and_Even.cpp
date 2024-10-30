// https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> a(n);
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count += a[i];
    }
    if (count % 2 == 0)
        cout << count << '\n';
    else
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                cout << count - a[i] << '\n';
                break;
            }
        }
    }
    return 0;
}