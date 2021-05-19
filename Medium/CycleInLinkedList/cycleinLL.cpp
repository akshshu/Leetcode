
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        if (head == NULL)
            return nullptr;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
                break;
        }
        if (fast == NULL || fast->next == NULL)
            return nullptr;
        fast = head;
        while (fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
};

