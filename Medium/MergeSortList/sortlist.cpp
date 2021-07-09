
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *Merge(ListNode *first, ListNode *second)
    {
        ListNode *newN = new ListNode();
        newN->val = INT_MIN;
        ListNode *ptrnew = newN;
        newN->next = second;
        while (first && second)
        {
            ListNode *tempNode;
            if (first->val > second->val)
            {
                newN = newN->next;
                second = second->next;
            }
            else
            {
                tempNode = first->next;
                first->next = second;
                newN->next = first;
                newN = first;
                first = tempNode;
            }
        }
        if (first)
        {
            newN->next = first;
        }
        return ptrnew->next;
    }
    ListNode *partition(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr;
        while (fast != nullptr and fast->next != nullptr)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = nullptr;
        return slow;
    }
    ListNode *sortList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *mid = partition(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        return Merge(left, right);
    }
};
int main()
{
    Solution s;
    ListNode *head = new ListNode();
    head->val = 4;
    ListNode *newNode = new ListNode();
    newNode->val = 2;
    head->next = newNode;
    ListNode *newNode2 = new ListNode();
    newNode2->val = 1;
    newNode->next = newNode2;
    newNode = newNode->next;
    newNode2 = new ListNode();
    newNode2->val = 3;
    newNode->next = newNode2;
    newNode2->next = nullptr;
    ListNode *i = head;

    auto ans = s.sortList(head);
    while (ans)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}
