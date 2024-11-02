// https://codeforces.com/problemset/problem/1907/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        vector<int> rUpIndex, rLowIndex;
        vector<bool> ok(s.size(), true);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!rLowIndex.empty())
                {
                    ok[rLowIndex.back()] = false;
                    rLowIndex.pop_back();
                }
                ok[i] = false;
            }
            else if (s[i] == 'B')
            {
                if (!rUpIndex.empty())
                {
                    ok[rUpIndex.back()] = false;
                    rUpIndex.pop_back();
                }
                ok[i] = false;
            }
            else if (isupper(s[i]))
                rUpIndex.push_back(i);

            else if (islower(s[i]))
                rLowIndex.push_back(i);
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (ok[i])
            {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}
