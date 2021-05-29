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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return nullptr;
        ListNode *traverse = head;
        int len = 0;
        while (traverse->next)
        {
            len++;
            traverse = traverse->next;
        }
        traverse->next = head;
        len++;
        int targetPos = abs((k % len) - len);
        traverse = nullptr;
        while (targetPos > 0)
        {
            targetPos--;
            traverse = head;
            head = head->next;
        }
        traverse->next = nullptr;
        return head;
    }
};