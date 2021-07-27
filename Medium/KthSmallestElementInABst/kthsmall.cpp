
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void inorder(TreeNode *root, int &p)
    {
        if (!root || p < 1)
            return;
        inorder(root->left, p);
        if (p < 1)
            return;
        else if (p == 1)
            p = -1 * root->val; //no node value is less than 1 so take advantage of that
        else
            p--;
        inorder(root->right, p);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        inorder(root, k);
        return -1 * k;
    }
};
// using morris traversal
// class Solution {
// public:
//     int kthSmallest(TreeNode* root2, int k) {
//         TreeNode* root=root2;
//         int ans=-1;
//         while(root){
//             if(root->left){
//                 auto temp=root->left;
//                 while(temp->right&&temp->right!=root){
//                     temp=temp->right;
//                 }
//                 if(temp->right==nullptr){
//                     temp->right=root;
//                     root=root->left;
//                 }
//                 else{
//                     temp->right=nullptr;
//                     if(k==1)
//                         ans= root->val;
//                     k--;
//                     root=root->right;
//                 }
//             }
//             else{
//                 if(k==1)
//                     ans=root->val;
//                 k--;
//                 root=root->right;
//             }
//         }
//         root2=root;
//         return ans;
//     }
// };
