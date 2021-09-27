
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fill(vector<vector<int>>& grid,int i,int j){
        if(i<0||j<0||i==grid.size()||j==grid[0].size()||grid[i][j]!=0)
            return;
        grid[i][j]=1;
        fill(grid,i-1,j);
        fill(grid,i,j+1);
        fill(grid,i,j-1);
        fill(grid,i+1,j);

    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 and (i==0||j==0||i==n-1||j==m-1))
                    fill(grid,i,j);
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)
                {
                    fill(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
