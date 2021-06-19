class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int end = nums.size() - 1;
        int strt = 0;
        int mid;
        while (strt <= end)
        {
            mid = strt + (end - strt) / 2;
            if ((mid == 0 || nums[mid] > nums[mid - 1]) && (mid == nums.size() - 1 || nums[mid] > nums[mid + 1]))
                return mid;
            else if (mid > 0 && nums[mid] < nums[mid - 1])
                end = mid - 1;
            else
                strt = mid + 1;
        }
        return 0;
    }
};