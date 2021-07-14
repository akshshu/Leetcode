
#include <bits/stdc++.h>
using namespace std;
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
    ListNode *reverse_list(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = nullptr;
        ListNode *nxt = head;
        while (nxt)
        {
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            curr->next = prev;
        }
        return curr;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *findSize;
        ListNode *l1head = reverse_list(l1);
        ListNode *l2head = reverse_list(l2);
        findSize = l1head;
        int sizel1 = 0;
        while (findSize)
        {
            sizel1++;
            findSize = findSize->next;
        }
        int sizel2 = 0;
        findSize = l2head;
        while (findSize)
        {
            sizel2++;
            findSize = findSize->next;
        }
        ListNode *traverse1 = nullptr;
        ListNode *traverse2 = nullptr;
        if (sizel1 >= sizel2)
        {
            traverse1 = l1head;
            traverse2 = l2head;
        }
        else
        {
            traverse1 = l2head;
            traverse2 = l1head;
        }
        int Carry = 0;
        ListNode *prev = nullptr;
        while (traverse2)
        {
            int sum_val = traverse1->val + traverse2->val + Carry;
            traverse1->val = sum_val % 10;
            Carry = sum_val / 10;
            prev = traverse1;
            traverse1 = traverse1->next;
            traverse2 = traverse2->next;
        }

        while (traverse1)
        {
            int sum_val = traverse1->val + Carry;
            traverse1->val = sum_val % 10;
            Carry = sum_val / 10;
            prev = traverse1;
            traverse1 = traverse1->next;
        }
        if (Carry)
        {
            ListNode *extra = new ListNode(Carry);
            prev->next = extra;
        }
        return (sizel1 >= sizel2) ? reverse_list(l1head) : reverse_list(l2head);
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
