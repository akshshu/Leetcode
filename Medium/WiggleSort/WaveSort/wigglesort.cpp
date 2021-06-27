
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        // write your code here
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i % 2 == 0 && nums[i] > nums[i + 1])
                swap(nums[i], nums[i + 1]);
            else if (i % 2 == 1 && nums[i] < nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 3, 6, 1, 9, 2};
    s.wiggleSort(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }
    return 0;
}
