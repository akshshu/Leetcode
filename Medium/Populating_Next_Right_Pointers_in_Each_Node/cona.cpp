
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root || !root->left)
            return root;
        root->left->next = root->right;
        root->right->next = root->next ? root->next->left : root->next;
        connect(root->left);
        connect(root->right);
        return root;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

// class Solution {
// public:

//     void recurs(Node*root1,Node*root2){
//         if(root1==nullptr)
//             return;
//         recurs(root1->right,root2->left);
//         root1->next=root2;
//     }

//     Node* connect(Node* root) {
//         if(!root||!root->left)
//             return root;
//          connect(root->left);
//         connect(root->right);
//         recurs(root->left,root->right);
//         return root;
//     }
// };
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
