class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int i1 = -1, i2 = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target && i1 < 0)
                i1 = i2 = i;
            else if (nums[i] == target && i1 >= 0)
                i2 = i;
        }
        nums.clear();
        nums.push_back(i1);
        nums.push_back(i2);
        return nums;
    }
};