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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    int l = 0;
    ListNode *copy;
    Solution(ListNode *head)
    {
        copy = head;
        while (copy)
        {
            l++;
            copy = copy->next;
        }
        copy = head;
    }

    /** Returns a random node's value. */
    int getRandom()
    {
        int random = (rand() % l);
        int x = 0;
        ListNode *temp = copy;
        while (x < random)
        {
            x++;
            temp = temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */