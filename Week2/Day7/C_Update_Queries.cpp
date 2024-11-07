// https://codeforces.com/problemset/problem/1986/C

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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> a(m);
        set<int> st;

        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i : a)
            st.insert(i - 1);

        string t;
        cin >> t;
        sort(t.begin(), t.end());
        int index = 0;

        for (int i : st)
            s[i] = t[index++];

        cout << s << "\n";
    }

    return 0;
}