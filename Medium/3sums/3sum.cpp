
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0 && nums[i - 1] == nums[i])
                continue;
            int reqSum = nums[i] * -1;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                if ((nums[left] + nums[right]) == reqSum)
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if ((nums[left] + nums[right]) > reqSum)
                    right--;
                else
                    left++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> input = {-1, 0, 1, 2, -1, -4};
    auto ans = s.threeSum(input);
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
