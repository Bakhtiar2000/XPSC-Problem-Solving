// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a == 0)
        cout << 1 << '\n';
    else
    {
        int count = 0;
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= a; j++)
            {
                for (int k = 0; k <= a; k++)
                {
                    if (i + j + k <= a && i * j * k <= b)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}