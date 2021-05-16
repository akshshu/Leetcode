
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    set<vector<int>> ans;
    void recurs(vector<int> &nums, int i)
    {
        if (i == nums.size() - 1)
        {
            ans.insert(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++)
        {
            swap(nums[i], nums[j]);
            recurs(nums, i + 1);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        recurs(nums, 0);
        vector<vector<int>> ans2(ans.begin(), ans.end());

        return ans2;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 3};
    auto ans = s.permuteUnique(nums);
    for (auto &x : ans)
    {
        for (auto &p : x)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}
