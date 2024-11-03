// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string name = "Timur";
    sort(name.begin(), name.end());
    while (n--)
    {
        int x;
        string spelling;
        cin >> x >> spelling;
        sort(spelling.begin(), spelling.end());
        if (x != 5)
            cout << "NO" << '\n';
        else
        {
            if (name == spelling)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}