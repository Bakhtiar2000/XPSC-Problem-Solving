// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    for (int value : ml)
    {
        cout << value << ' ';
    }

    return 0;
}