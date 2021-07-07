
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        int indexTofill = 0;
        if (nums.size() < 2)
        {
            return nums.size();
        }
        while (i < nums.size() - 1)
        {
            nums[indexTofill++] = nums[i];
            if (nums[i] == nums[i + 1])
            {
                int j = i + 1;
                while (j < nums.size() && nums[j] == nums[i])
                {
                    j++;
                }
                i = j - 1;
            }
            i++;
        }
        if (nums[nums.size() - 1] != nums[nums.size() - 2])
            nums[indexTofill++] = nums[nums.size() - 1];
        return indexTofill;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
