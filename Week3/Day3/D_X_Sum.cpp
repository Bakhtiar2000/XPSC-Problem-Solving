// https://codeforces.com/problemset/problem/1676/D

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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> board(n, vector<int>(m));
        vector<vector<int>> sum(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> board[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int si = i, sj = j;
                sum[i][j] = board[i][j];
                while (si > 0 && sj > 0)
                {
                    sum[i][j] += board[si - 1][sj - 1];
                    si--, sj--;
                }
                si = i, sj = j;
                while (si > 0 && sj < m - 1)
                {
                    sum[i][j] += board[si - 1][sj + 1];
                    si--, sj++;
                }
                si = i, sj = j;
                while (si < n - 1 && sj > 0)
                {
                    sum[i][j] += board[si + 1][sj - 1];
                    si++, sj--;
                }
                si = i, sj = j;
                while (si < n - 1 && sj < m - 1)
                {
                    sum[i][j] += board[si + 1][sj + 1];
                    si++, sj++;
                }
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, sum[i][j]);
            }
        }
        cout << mx << '\n';
    }

    return 0;
}