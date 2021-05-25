/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<int> ans;
    void recurs(Node *root)
    {
        if (root != nullptr)
        {
            ans.push_back(root->val);
            for (auto child : root->children)
                recurs(child);
        }
    }
    vector<int> preorder(Node *root)
    {
        recurs(root);
        return ans;
    }
};