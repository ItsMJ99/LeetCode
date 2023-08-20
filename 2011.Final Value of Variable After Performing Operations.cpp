class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int X = 0;
        for (auto ele : operations)
        {
            if (ele[0] == '+' || ele[2] == '+')
                X++;
            else
                X--;
        }
        return X;
    }
};