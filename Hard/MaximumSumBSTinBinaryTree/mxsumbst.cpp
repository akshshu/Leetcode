
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    vector<int> recurs(TreeNode* root){
        if(!root)
            return {0,INT_MAX,INT_MIN,1};
        auto x=recurs(root->left);
        auto y=recurs(root->right);
        if(x[3] and y[3])
        {   
            
            if(root->val>x[2] and root->val<y[1])
            {
                ans=max(ans,root->val+x[0]+y[0]);
                return {root->val+x[0]+y[0],min(root->val,x[1]),max(root->val,y[2]),1};
            }
        }
        return {root->val,root->val,root->val,0}; 
    }
    int maxSumBST(TreeNode* root) {
       auto temp= recurs(root);
        return ans;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
