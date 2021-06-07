class Solution {
public:
    int recurs(const vector<vector<int>>& triangle,int row,int col,vector<vector<int>>&dp){
        if(row>triangle.size()-1)
            return 0;
        if(dp[row][col]!=-1)
            return dp[row][col];
        dp[row][col]=min(recurs(triangle,row+1,col,dp),recurs(triangle,row+1,col+1,dp))+triangle[row][col];     
        return dp[row][col];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),-1));
        int ans=recurs(triangle,0,0,dp);
        return ans;
    }
};