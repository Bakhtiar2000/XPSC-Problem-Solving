// https://www.codechef.com/problems/STRAME

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
        string s;
        cin >> s;
        int x = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                x++;
        x = min(x, n - x);
        cout << (x % 2 == 1 ? "Zlatan" : "Ramos") << '\n';
    }

    return 0;
}