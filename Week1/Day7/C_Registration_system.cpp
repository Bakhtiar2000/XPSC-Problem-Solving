// https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> res;

    while (n--)
    {
        string s;
        cin >> s;

        if (res.find(s) == res.end())
        {
            cout << "OK" << '\n';
            res[s] = 1;
        }
        else
        {
            int count = res[s];
            string newName = s + to_string(count);
            while (res.find(newName) != res.end())
            {
                count++;
                newName = s + to_string(count);
            }
            cout << newName << '\n';
            res[s] = count + 1;
            res[newName] = 1;
        }
    }

    return 0;
}
