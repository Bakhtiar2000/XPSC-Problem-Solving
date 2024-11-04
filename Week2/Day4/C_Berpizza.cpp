// https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customer = 1;
    cin >> n;
    set<pair<int, int>> s; //
    multiset<pair<int, int>> ms;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int money;
            cin >> money;
            s.insert({customer, money});
            ms.insert({money, -customer});
            customer++;
        }
        else if (t == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos = -ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << '\n';

    return 0;
}