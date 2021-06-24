
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return nums.size();
        }
        int lastUpdate = 0;
        int count = 0;
        int i;
        for (i = 0; i < nums.size() - 1; i++)
        {
            nums[lastUpdate++] = nums[i];
            if (nums[i] == nums[i + 1])
            {
                if (count == 0)
                    count++;
                else
                {
                    count = 0;
                    int j = i + 1;
                    while (j < nums.size() && (nums[j] == nums[i]))
                        j++;
                    i = j - 1;
                }
            }
            else
                count = 0;
        }
        if (i == nums.size())
            return lastUpdate;
        if ((nums[i] == nums[lastUpdate - 1]) && (nums[i] == nums[lastUpdate - 2]))
            return lastUpdate;
        else
        {
            nums[lastUpdate++] = nums[i];
        }
        return lastUpdate;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1, 2, 2, 2, 2, 2, 3, 4, 4, 4};
    auto ans = s.removeDuplicates(nums);
    for (int i = 0; i < ans; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
