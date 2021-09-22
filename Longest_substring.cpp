class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int n = s.size();
        if(n == 0)
            return 0;

        map<char, int> m;
        int ans = 1, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (m.find(s[i]) != m.end())
                j = max(j, m[s[i]] + 1);

            m[s[i]] = i;
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};