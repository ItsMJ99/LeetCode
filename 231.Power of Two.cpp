class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
            return false;
        long long no;
        for (int i = 0; i <= n; i++)
        {
            no = pow(2, i);
            if (no > n)
                return false;
            else if (no == n)
                return true;
        }
        return false;
    }
};