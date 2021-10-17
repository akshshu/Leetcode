
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dfs(vector<int>&windowSum,int index,vector<int>&nums,int m,int &k,vector<vector<int>>&dp){
        if(m==-1||index>=nums.size())
            return 0;
        if(dp[index][m]!=-1)
            return dp[index][m];
        int exclude=0+dfs(windowSum,index+1,nums,m,k,dp);
        int include=windowSum[index]+dfs(windowSum,index+k,nums,m-1,k,dp);
        dp[index][m]=max(include,exclude);
        return dp[index][m];
    }
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int m=3;
        int sum=0;
        vector<int>windowSum(n,0);
        for(int i=0;i<k;i++)
            sum+=nums[i];
        windowSum[0]=sum;
        for(int j=k,p=0;j<n;j++,p++)
        {
            sum+=nums[j]-nums[p];
            windowSum[j-k+1]=sum;
        }
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int temp=dfs(windowSum,0,nums,m-1,k,dp);
        int i=0;
        m-=1;
        vector<int>ans;
        while(m>=0)
        {
            int index=i;
            int im=INT_MIN;
            while(i<n and temp==dp[i][m])
            {
                if(windowSum[i]>im)
                {
                    im=windowSum[i];
                    index=i;
                } 
                i++;
            }
            ans.push_back(index);
            temp-=windowSum[index];
            i=index+k;
            m--;
        }
        return ans;
        
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
