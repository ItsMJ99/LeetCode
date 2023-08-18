class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for (auto ele : nums2)
            nums1.push_back(ele);

        sort(nums1.begin(), nums1.end());

        if (nums1.size() % 2 != 0)
        {
            return nums1[(nums1.size() - 1) / 2];
        }
        else
        {
            if (nums1[(nums1.size() - 1) / 2] == 0 && nums1[nums1.size() / 2] == 0)
                return 0;
            else
            {
                float no = (nums1[(nums1.size() - 1) / 2] + nums1[nums1.size() / 2]);
                return no / 2;
            }
        }
        return 0;
    }
};