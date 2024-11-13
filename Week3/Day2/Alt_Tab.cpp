// https://www.codechef.com/problems/ALTTAB

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    map<int, string> mp2;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        mp[x] = i;
        mp2[i] = x;
    }

    set<int> st;
    for (auto [key, value] : mp)
    {
        st.insert(value);
    }
    string res = "";
    for (auto it = st.rbegin(); it != st.rend(); ++it)
    {
        string s = mp2[*it];
        int size = s.size();
        res = res + s[size - 2] + s[size - 1];
    }
    cout << res << '\n';

    return 0;
}