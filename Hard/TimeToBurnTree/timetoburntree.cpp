#include <bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <unordered_map>
int nodes;

// void traverse(BinaryTreeNode<int> *root)
// {
//     if (!root)
//         return;
//     nodes++;
//     traverse(root->left);
//     traverse(root->right);
// }
void traverse2(BinaryTreeNode<int> *root, unordered_map<int, vector<int>> &adj)
{
    if (!root)
        return;
    if (root->left)
    {
        adj[root->data].push_back(root->left->data);
        adj[root->left->data].push_back(root->data);
        traverse2(root->left, adj);
    }
    if (root->right)
    {
        adj[root->data].push_back(root->right->data);
        adj[root->right->data].push_back(root->data);
        traverse2(root->right, adj);
    }
}
int timeToBurnTree(BinaryTreeNode<int> *root, int start)
{
    nodes = 0;
    //     traverse(root);
    unordered_map<int, vector<int>> adj;
    traverse2(root, adj);
    unordered_map<int, int> visited;
    queue<int> q;
    q.push(start);
    int step = 0;
    visited[start] = 1;
    while (!q.empty())
    {
        int s = q.size();
        step++;
        while (s)
        {
            int tp = q.front();
            q.pop();
            for (auto x : adj[tp])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = 1;
                }
            }
            s--;
        }
    }

    return step - 1;
}

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *root2 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *root3 = new BinaryTreeNode<int>(3);
    root->left = root2;
    root->right = root3;

    BinaryTreeNode<int> *root4 = new BinaryTreeNode<int>(4);
    BinaryTreeNode<int> *root5 = new BinaryTreeNode<int>(5);
    root3->left = root4;
    root3->right = root5;

    int x = timeToBurnTree(root, 3);
    return 0;
}