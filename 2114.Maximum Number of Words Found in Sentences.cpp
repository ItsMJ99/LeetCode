class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int words, m = 0;
        for (string ele : sentences)
        {
            words = 1;
            for (int j = 0; j < ele.length(); j++)
            {
                if (ele[j] == ' ')
                    words++;
            }
            m = max(m, words);
        }
        return m;
    }
};