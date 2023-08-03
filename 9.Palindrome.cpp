class Solution
{
public:
    bool isPalindrome(int x)
    {
        string str = to_string(x);
        string ans = "";
        for (int i = str.length(); i > 0; i--)
            ans += str[i - 1];
        if (ans == str)
            return true;
        else
            return false;
    }
};