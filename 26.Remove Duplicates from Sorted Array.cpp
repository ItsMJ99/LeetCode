class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] == nums[j] && nums.size() > 1)
                {
                    nums.erase(nums.begin() + i);
                    --i;
                }
            }
        }
        return nums.size();
    }
};