
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode dummyHead(0);
        ListNode *tempList = &dummyHead;
        ListNode *copy = tempList;
        tempList->next = l2;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                ListNode *temp = l1->next;
                copy->next = l1;
                l1->next = l2;
                l1 = temp;
            }
            else
                l2 = l2->next;
            copy = copy->next;
        }
        if (l1)
            copy->next = l1;
        return tempList->next;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
