
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *root;
    ListNode *recurs(ListNode *r)
    {
        if (r->next == nullptr)
        {
            root = r;
            return r;
        }
        auto x = recurs(r->next);
        x->next = r;
        return r;
    }
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return head;
        auto x = recurs(head);
        x->next = nullptr;
        return root;
    }
};
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
//_________________________________Iterative Solution_________________________________
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *temp = nullptr;
        ListNode *adv = head;
        while (adv)
        {
            temp = adv;
            adv = adv->next;
            temp->next = prev;
            prev = temp;
        }
        return temp;
    }
};