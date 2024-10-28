// https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> ans, has;
    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (has.find(a) != has.end())
        {
            // new input a = ILoveCodeforces, b = MikeMirzayanov. has[ILoveCodeforces] = Misha
            string s = has[a]; // s = Misha
            ans[s] = b;        // ans[Misha] = MikeMirzayanov
            has.erase(a);
            has[b] = s; // has[MikeMirzayanov] = Misha
        }
        else
        {
            // When a = Misha, b= ILoveCodeforces
            ans[a] = b;
            // Misha = ILoveCodeforces
            has[b] = a;
            // ILoveCodeforces = Misha
        }
    }

    cout << ans.size() << '\n';
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << '\n';
    }
    return 0;
}