
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void preorder(TreeNode* root,string &str)
    {
        if(!root)
            return;
        str+=to_string(root->val)+'#';
        preorder(root->left,str);
        preorder(root->right,str);
    }
    string serialize(TreeNode* root) {
        string str="";
        preorder(root,str);
        return str;
    }

    // Decodes your encoded data to tree.
    int findpoint(vector<int>&nums,int low,int high,int val){
        int i;
        for(i=low;i<=high;i++){
            if(val<nums[i])
                return i;
        }
        return i;
    }
    TreeNode* deser(vector<int>&nums,int low,int high){
        if(low>high)
            return nullptr;
        TreeNode *root=new TreeNode(nums[low]);
        int dividepoint=findpoint(nums,low+1,high,root->val);
        root->left=deser(nums,low+1,dividepoint-1);
        root->right=deser(nums,dividepoint,high);
        return root;
    }
    TreeNode* deserialize(string data) {
        int n=data.size();
        string temp="";
        vector<int>nums;
        for(int i=0;i<n;i++){
            if(data[i]=='#')
            {
                int val=stoi(temp);
                temp="";
                nums.push_back(val);
                continue;
            }
            temp+=data[i];
        }
        int k=nums.size()-1;
        return deser(nums,0,k);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
