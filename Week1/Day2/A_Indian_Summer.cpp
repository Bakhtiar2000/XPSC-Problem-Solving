// https://codeforces.com/contest/44/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    // Let's say, the vector looks like this: s = { "cherry", "apple", "banana", "banana", "apple" }

    // We need to sort before using unique function
    sort(s.begin(), s.end());
    // After sort s = { "apple", "apple", "banana", "banana", "cherry" }

    // unique function moves unique elements to the front of the vector and returns an iterator
    auto last = unique(s.begin(), s.end());
    /* s = { "apple", "banana", "cherry", "banana", "cherry" }
                                     ^
                                    last (new logical end)
    The iterator last points at last unique element of the array. After this index, the duplicates remains */

    // Now, we erase those duplicates from last iterator too the end of the vector
    s.erase(last, s.end());

    cout << s.size();
    return 0;
}