// https://codeforces.com/problemset/problem/26/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> prime(3005, true);
    for (int i = 2; i * i <= 3005; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= 3005; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> pm;

    for (int i = 2; i <= n / 2; i++)
    {
        if (prime[i])
            pm.push_back(i);
    }

    map<int, int> mp;
    for (int i = 0; i < pm.size(); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % pm[i] == 0)
                mp[j]++;
        }
    }

    int cnt = 0;
    for (auto [x, y] : mp)
    {
        if (y == 2)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}