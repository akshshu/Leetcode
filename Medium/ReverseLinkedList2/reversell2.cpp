
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (left == right)
            return head;
        ListNode *prev = nullptr;
        ListNode *curr = head;
        for (int i = 0; i < left - 1; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        ListNode *cop2 = prev;
        ListNode *cop1 = curr;
        while (left <= right)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            left++;
        }

        cop1->next = curr;
        if (cop2 != nullptr)
        {
            cop2->next = prev;
            return head;
        }
        else
        {
            return prev;
        }
    }
};

int main()
{
    Solution s;
    ListNode *start = new ListNode(2);
    ListNode *temp = start;
    ListNode *temp2 = new ListNode(4);
    temp->next = temp2;
    temp = temp2;
    temp2 = new ListNode(6);
    temp->next = temp2;
    temp = temp2;
    temp2 = new ListNode(8);
    temp->next = temp2;
    temp = temp2;
    temp2 = new ListNode(10);
    temp->next = temp2;
    temp = temp2;

    auto ans = s.reverseBetween(start, 2, 4);
    while (ans != nullptr)
    {
        cout << ans->val << endl;
        ans = ans->next;
    }
    return 0;
}
