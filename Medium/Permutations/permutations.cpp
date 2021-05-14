#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    void permutate(vector<int> &nums, int x, int size)
    {
        if (x == size - 1)
        {
            ans.push_back(nums);
        }
        else
        {
            for (int i = x; i < size; i++)
            {
                swap(nums[x], nums[i]);
                permutate(nums, x + 1, size);
                swap(nums[x], nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        permutate(nums, 0, nums.size());
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    // s.permute(nums);
    for (auto x : s.permute(nums))
    {
        for (auto y : x)
        {
            cout << y << ",";
        }
        cout << endl;
    }
    return 0;
}