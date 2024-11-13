// https://www.codechef.com/problems/MOONSOON

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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> energy(n), power(m);

        for (int i = 0; i < n; i++)
            cin >> energy[i];
        for (int i = 0; i < m; i++)
            cin >> power[i];

        sort(energy.begin(), energy.end(), greater<>());
        sort(power.begin(), power.end(), greater<>());

        ll total_energy = 0;

        for (int i = 0; i < min(n, m); i++)
        {
            ll energy_stored = min(1LL * energy[i], 1LL * power[i] * h);
            total_energy += energy_stored;
        }

        cout << total_energy << '\n';
    }

    return 0;
}
