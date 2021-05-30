
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int size = nums.size();
        int targetpos = abs((k % size) - size);
        reverse(nums.begin(), nums.begin() + targetpos);
        reverse(nums.begin() + targetpos, nums.end());
        reverse(nums.begin(), nums.end());
        for (auto x : nums)
        {
            cout << x << " ";
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 4);
    return 0;
}
