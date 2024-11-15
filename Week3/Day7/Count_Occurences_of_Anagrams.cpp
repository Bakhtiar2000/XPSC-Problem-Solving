// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution
{
public:
    int search(string pat, string txt)
    {
        int patLength = pat.length();
        int txtLength = txt.length();

        vector<int> patArray(26, 0);
        vector<int> txtArray(26, 0);

        for (int i = 0; i < patLength; i++)
        {
            patArray[pat[i] - 'a']++;
            txtArray[txt[i] - 'a']++;
        }

        int count = 0;
        if (patArray == txtArray)
            count++;

        for (int i = patLength; i < txtLength; i++)
        {
            txtArray[txt[i] - 'a']++;
            txtArray[txt[i - patLength] - 'a']--;

            if (patArray == txtArray)
                count++;
        }

        return count;
    }
};