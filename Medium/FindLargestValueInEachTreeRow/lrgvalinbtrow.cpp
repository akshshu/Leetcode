
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestValues(TreeNode *root)
    {
        if (!root)
            return {};
        vector<int> ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            auto tp = q.front();
            int s = q.size();
            ans.push_back(tp->val);
            q.pop();
            if (tp->left)
                q.push(tp->left);
            if (tp->right)
                q.push(tp->right);
            s--;
            while (s--)
            {
                auto top = q.front();
                q.pop();
                if (ans.back() < top->val)
                {
                    ans.pop_back();
                    ans.push_back(top->val);
                }
                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
