
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // int ans=0;
    // int recurs(int sum,int target,vector<int>&nums,vector<int>&dp){
    //     if(sum>target)
    //         return 0;
    //     if(sum==target)
    //         return 1;
    //     if(dp[sum]!=-1)
    //         return dp[sum];
    //     dp[sum]=0;
    //     for(int i=0;i<nums.size();i++)
    //         dp[sum]+=recurs(sum+nums[i],target,nums,dp);
    //     return dp[sum];
    // }
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<unsigned int> dp(target + 1, 0);
        // dp[0]=recurs(0,target,nums,dp);
        dp[0] = 1; //when remaining sum is zero we know that we have found a combination
        for (int i = 1; i <= target; i++)
        {
            for (int x : nums)
            {
                if (x > i)
                    continue;
                dp[i] += dp[i - x];
            }
        }

        return dp[target];
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
