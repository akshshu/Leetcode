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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *store[1 + 30];
        int i = 0;
        while (head != nullptr)
        {
            store[++i] = head;
            head = head->next;
        }
        head = store[1];
        int del = i - n + 1;
        if (del == 1)
            head = store[1]->next;
        else
            store[del - 1]->next = store[del]->next;
        return head;
    }
};