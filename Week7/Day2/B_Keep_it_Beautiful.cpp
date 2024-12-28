// https://codeforces.com/problemset/problem/1841/B

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
        int q;
        cin >> q;

        vector<int> v(q);
        vector<int> a;
        string s;
        bool flag = false;

        for (int i = 0; i < q; i++)
        {
            cin >> v[i];

            if (a.empty())
            {
                s += '1';
                a.push_back(v[i]);
            }

            else
            {
                if (flag)
                {
                    if (v[i] < a.back())
                    {
                        s += '0';
                    }

                    else
                    {
                        if (v[i] > a[0])
                        {
                            s += '0';
                        }
                        else
                        {
                            s += '1';
                            a.push_back(v[i]);
                        }
                    }
                }

                else
                {
                    if (v[i] >= a.back())
                    {
                        s += '1';
                        a.push_back(v[i]);
                    }

                    else
                    {
                        if (v[i] > a[0])
                        {
                            s += '0';
                        }
                        else
                        {
                            flag = true;
                            s += '1';
                            a.push_back(v[i]);
                        }
                    }
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}