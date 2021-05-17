
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *ptr = head;
        ListNode *hlpptr = head;
        while (hlpptr != nullptr)
        {
            hlpptr = hlpptr->next;
        }
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
