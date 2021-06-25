class Solution
{

public:
    ListNode *partition(ListNode *head, int x)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        /* we will use 2 dummy nodes to track the 2 lists */

        ListNode dummy_before, dummy_after;
        ListNode *tail_before = &dummy_before, *tail_after = &dummy_after, *curr = head;

        while (curr)
        {
            ListNode *next_node = curr->next;

            /* Add the node to the first list */
            if (curr->val < x)
            {
                tail_before->next = curr;
                tail_before = tail_before->next;
            }
            else /* Add it to the second list */
            {
                tail_after->next = curr;
                tail_after = tail_after->next;
            }

            //want to de-link this node from the original list
            curr->next = nullptr;
            curr = next_node; // go to next node in the original list
        }

        /* link the first list with the second i.e. 
            tail of first list with head of second list */
        tail_before->next = dummy_after.next;

        /* return the head of the first list */
        return dummy_before.next;
    }
};