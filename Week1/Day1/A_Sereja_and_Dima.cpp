// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    while (!a.empty())
    {
        if (i % 2 == 0)
        {
            if (a[0] > a[a.size() - 1])
            {
                s += a[0];
                a.erase(a.begin());
            }
            else
            {
                s += a[a.size() - 1];
                a.erase(a.end() - 1);
            }
        }
        else
        {
            if (a[0] > a[a.size() - 1])
            {
                d += a[0];
                a.erase(a.begin());
            }
            else
            {
                d += a[a.size() - 1];
                a.erase(a.end() - 1);
            }
        }
        i++;
    }

    cout << s << " " << d << endl;

    return 0;
}