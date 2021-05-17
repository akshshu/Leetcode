
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0 && nums[i - 1] == nums[i])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j != i + 1 && nums[j - 1] == nums[j])
                    continue;
                int reqSum = (nums[i] + nums[j]);
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right)
                {
                    int sum = nums[left] + nums[right] + reqSum;
                    if (sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    }
                    else if (sum > target)
                        right--;
                    else
                        left++;
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> input = {1, 0, -1, 0, -2, 2};
    auto ans = s.fourSum(input);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
