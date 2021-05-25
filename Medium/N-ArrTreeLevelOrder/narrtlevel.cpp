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
    int getDepth(Node *node)
    {
        if (node == nullptr)
            return 0;
        int check = -1;
        for (auto x : node->children)
        {
            check = max(check, getDepth(x));
        }
        return 1 + check;
    }
    void recurs(Node *root, int currdepth, vector<vector<int>> &ans, int depth)
    {

        if (root == nullptr)
            return;
        for (auto x : root->children)
        {
            recurs(x, currdepth + 1, ans, depth);
        }
        ans[currdepth].push_back(root->val);
    }
    vector<vector<int>> levelOrder(Node *root)
    {
        if (root == nullptr)
            return {};
        int depth = getDepth(root);
        vector<vector<int>> ans(depth + 1, vector<int>());
        recurs(root, 0, ans, depth);
        return ans;
    }
};
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



class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ans;
        queue<Node *> qp;
        if (root == nullptr)
            return ans;
        qp.push(root);
        int s = qp.size();
        while (!qp.empty())
        {
            vector<int> temp;
            while (s--)
            {
                temp.push_back(qp.front()->val);
                for(auto x:qp.front()->children)
                    qp.push(x);                
                qp.pop();
            }
            ans.push_back(temp);
            s = qp.size();
        }
        return ans;
    }
};
*/