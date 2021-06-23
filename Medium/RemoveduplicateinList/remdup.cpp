class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *dummyHead = new ListNode(-1);
        ListNode *newHead = dummyHead;
        ListNode *newTail = dummyHead;
        ListNode *p = head;
        ListNode *q = head;
        p = p->next;
        int count;
        while (p)
        {
            count = 1;
            while (p && p->val == q->val)
            {
                count++;
                p = p->next;
            }
            if (count == 1)
            {
                newTail->next = q;
                newTail = newTail->next;
                newTail->next = nullptr;
            }
            q = p;
            if (p)
                p = p->next;
        }
        if (q && !q->next)
        {
            newTail->next = q;
            newTail = newTail->next;
        }
        newHead = newHead->next;
        return newHead;
    }
};