
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        int sum = 0;
        for (int x : nums)
        {
            if (!(x % 2))
                sum += x;
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {
            if (nums[queries[i][1]] % 2 == 0)
                sum -= nums[queries[i][1]];
            nums[queries[i][1]] += queries[i][0];
            if (nums[queries[i][1]] % 2 == 0)
                sum += nums[queries[i][1]];
            ans.push_back(sum);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<vector<int>> queries = {{1, 0}, {-3, 1}, {-4, 0}, {2, 3}};
    auto ans = s.sumEvenAfterQueries(nums, queries);
    return 0;
}
