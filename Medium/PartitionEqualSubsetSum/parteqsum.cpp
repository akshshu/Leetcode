
#include<bits/stdc++.h>
class Solution {
public:
    bool helper(int index,vector<int>&nums,int &total,int &n,int currSum,vector<vector<int>>&dp){
        if(index==n||currSum>total-currSum)
            return false;
        if(currSum==total-currSum)
            return true;
        if(dp[currSum][index]!=-1)
            return dp[currSum][index]==1;
        dp[currSum][index]=(helper(index+1,nums,total,n,currSum+nums[index],dp)||helper(index+1,nums,total,n,currSum,dp))?1:0;
        return (dp[currSum][index]==1);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int x:nums)
            total+=x;
        if(total%2)
            return false;
        vector<vector<int>>dp((total+1)/2,vector<int>(n,-1));
        return helper(0,nums,total,n,0,dp);
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
