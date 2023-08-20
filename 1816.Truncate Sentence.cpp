class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        int blank = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
                ans += s[i];
            else
            {
                blank += 1;
                if (blank >= k)
                    break;
                ans += ' ';
            }
        }
        return ans;
    }
};