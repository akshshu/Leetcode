/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
class Solution
{
public:
    vector<ListNode *> list;
    TreeNode *helper(int strt, int end)
    {
        if (strt > end)
            return nullptr;
        int mid = (strt + end) / 2;
        TreeNode *root = new TreeNode(list[mid]->val);
        root->left = helper(strt, mid - 1);
        root->right = helper(mid + 1, end);
        return root;
    }
    TreeNode *sortedListToBST(ListNode *head)
    {

        while (head != nullptr)
        {
            list.push_back(head);
            head = head->next;
        }
        return helper(0, list.size() - 1);
    }
};
class Solution
{
public:
    TreeNode *sortedListToBST(ListNode *head, ListNode *tail = NULL)
    {
        if (head == tail)
            return NULL;

        ListNode *fast = head, *slow = head;
        while (fast != tail && fast->next != tail)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode *root = new TreeNode(slow->val);
        root->left = sortedListToBST(head, slow);
        root->right = sortedListToBST(slow->next, tail);

        return root;
    }
};