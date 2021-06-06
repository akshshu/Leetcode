class Solution
{
public:
    string optString = "";
    void recurs(TreeNode *root, string strSoFar)
    {
        if (root == nullptr)
            return;
        strSofar = (char)(root->val + 'a') + strSofar;
        if (root->left == nullptr && root->right == nullptr)
        {
            if (optStringSofar.size() == 0)
                optString += strSofar;
            else
                optString = min(strSofar, optString);
        }
        recurs(root->left, strSofar);
        recurs(root->right, strSofar);
    }
    string smallestFromLeaf(TreeNode *root)
    {
        recurs(root, "");
        return optStringSofar;
    }
};