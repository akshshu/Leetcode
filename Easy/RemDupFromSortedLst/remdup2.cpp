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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *headCopy = head;
        ListNode *headCopy2 = head->next;
        while (headCopy2)
        {
            if (headCopy->val == headCopy2->val)
            {
                while (headCopy2 && (headCopy->val == headCopy2->val))
                {
                    headCopy2 = headCopy2->next;
                }
                headCopy->next = headCopy2;
            }
            headCopy = headCopy2;
            if (headCopy2)
                headCopy2 = headCopy2->next;
        }
        return head;
    }
};