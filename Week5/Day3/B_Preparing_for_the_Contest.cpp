// https://codeforces.com/problemset/problem/1914/B

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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n - k - 1; i++)
        {
            v.push_back(n - i);
        }
        for (int i = 1; i <= k + 1; i++)
        {
            v.push_back(i);
        }
        for (int value : v)
        {
            cout << value << " ";
        }
        cout << '\n';
    }

    return 0;
}