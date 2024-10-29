// https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string compare = "abcdefghijklmnopqrstuvwxyz";
    char missing = ' ';
    for (int i = 0; i < compare.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == compare[i])
                break;
            if (j == s.size() - 1)
                missing = compare[i];
        }
        if (missing != ' ')
            break;
    }

    if (missing == ' ')
        cout << "None" << '\n';
    else
        cout << missing << '\n';
    return 0;
}