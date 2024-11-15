// https://codeforces.com/problemset/problem/1741/A

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
        string a, b;
        cin >> a >> b;

        map<char, int> mp;
        mp['S'] = 0;
        mp['M'] = 1;
        mp['L'] = 2;
        char aLast = a.back(), bLast = b.back();

        if (a == b)
            cout << "=" << '\n';
        else if (mp[aLast] < mp[bLast])
            cout << "<" << '\n';
        else if (mp[aLast] > mp[bLast])
            cout << ">" << '\n';
        else if (aLast == 'S' && bLast == 'S')
            cout << (a.size() > b.size() ? "<" : ">") << '\n';
        else if (bLast == 'L' && aLast == 'L')
            cout << (a.size() > b.size() ? ">" : "<") << '\n';
    }

    return 0;
}