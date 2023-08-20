class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string c1 = "", c2 = "";
        c1 = accumulate(word1.begin(), word1.end(), string());
        c2 = accumulate(word2.begin(), word2.end(), string());
        if (c1 == c2)
            return true;
        else
            return false;
    }
};