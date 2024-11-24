// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

class solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        int n = arr.size();
        int mx = 0, cum = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cum += arr[i];
            if (cum == k)
            {
                mx = i + 1;
            }
            else if (mp.find(cum - k) != mp.end())
            {
                mx = max(mx, i - mp[cum - k]);
            }
            if (mp.find(cum) == mp.end())
            {
                mp[cum] = i;
            }
        }
        return mx;
    }
}