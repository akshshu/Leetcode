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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *ptr = head;
        ListNode *hlpptr = head->next;
        int i = 0;
        while (hlpptr != nullptr)
        {
            if (i % 2 == 0)
            {
                swap(ptr->val, hlpptr->val);
            }
            i++;
            ptr = ptr->next;
            hlpptr = hlpptr->next;
        }
        return head;
    }
};
