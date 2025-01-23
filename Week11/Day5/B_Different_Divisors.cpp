// https://codeforces.com/problemset/problem/1474/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool is_prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a = n + 1;
        while (!is_prime(a))
            a++;

        int b = n + a;
        while (!is_prime(b))
            b++;

        int ans = a * b;
        cout << ans << endl;
    }
    return 0;
}