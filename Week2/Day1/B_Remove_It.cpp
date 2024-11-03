// https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a != x)
            v.push_back(a);
    }
    for (int element : v)
    {
        cout << element << ' ';
    }
    return 0;
}