
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &s)
    {
        unordered_map<int, int> mapping;
        int prevStart = 0;
        int maxSum = 0;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mapping[s[i]]++;
            sum += s[i];
            if (mapping[s[i]] > 1)
            {
                while (mapping[s[i]] > 1)
                {
                    sum = sum - s[prevStart];
                    mapping[s[prevStart++]]--;
                }
            }
            maxSum = (sum > maxSum) ? sum : maxSum;
        }
        return maxSum;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 2, 4, 5, 6};
    auto ans = s.maximumUniqueSubarray(nums);
    return 0;
}
