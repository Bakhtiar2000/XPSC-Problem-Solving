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
        string res;
        vector<int> rUpIndex, rLowIndex;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                res.push_back(s[i]);
                if (isupper(s[i]))
                    rUpIndex.push_back(res.size() - 1);
                else if (islower(s[i]))
                    rLowIndex.push_back(res.size() - 1);
            }
            else if (s[i] == 'b' && !rLowIndex.empty())
            {
                res.erase(rLowIndex.back(), 1);
                rLowIndex.pop_back();
                if (!rUpIndex.empty() && !res.empty() && res.size() == rUpIndex.back())
                    rUpIndex.back()--;
                if (rUpIndex.size() >= 2 && rUpIndex.back() == rUpIndex[rUpIndex.size() - 2])
                    rUpIndex[rUpIndex.size() - 2] = rUpIndex.back() - 1;
            }
            else if (s[i] == 'B' && !rUpIndex.empty())
            {
                res.erase(rUpIndex.back(), 1);
                rUpIndex.pop_back();
                if (!rLowIndex.empty() && !res.empty() && res.size() == rLowIndex.back())
                    rLowIndex.back()--;
                if (rLowIndex.size() >= 2 && rLowIndex.back() == rLowIndex[rLowIndex.size() - 2])
                    rLowIndex[rLowIndex.size() - 2] = rLowIndex.back() - 1;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
