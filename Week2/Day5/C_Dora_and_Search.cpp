// https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;

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
        vector<int> v;
        deque<int> min, max;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            min.push_back(x);
            max.push_back(x);
        }
        sort(min.begin(), min.end());
        sort(max.begin(), max.end(), greater<>());

        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (v[i] != min[0] && v[i] != max[0] && v[j] != min[0] && v[j] != max[0])
            {
                break;
            }
            if (v[i] == min[0])
            {
                min.pop_front();
                i++;
            }
            else if (v[i] == max[0])
            {
                max.pop_front();
                i++;
            }
            if (v[j] == min[0])
            {
                min.pop_front();
                j--;
            }
            else if (v[j] == max[0])
            {
                max.pop_front();
                j--;
            }
        }
        i >= j ? cout << "-1" << '\n' : cout << i + 1 << " " << j + 1 << '\n';
    }

    return 0;
}