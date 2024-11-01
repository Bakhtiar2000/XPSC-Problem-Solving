// https://codeforces.com/problemset/problem/1997/A

#include <bits/stdc++.h>
using namespace std;

int typing_time(const string &s)
{
    int time = 2;

    for (size_t i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }

    return time;
}

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
        int max_time = 0;
        string best_password;
        for (char c = 'a'; c <= 'z'; ++c)
        {
            for (size_t i = 0; i <= s.size(); ++i)
            {
                string new_password = s.substr(0, i) + c + s.substr(i);
                int time = typing_time(new_password);
                if (time > max_time)
                {
                    max_time = time;
                    best_password = new_password;
                }
            }
        }

        cout << best_password << endl;
    }

    return 0;
}

// Could not