class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int e = 0;
        for (int ele : hours)
            e = ele >= target ? e += 1 : e;
        return e;
    }
};