
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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *tr = head;
        int l = 0;
        while (tr)
        {
            l++;
            tr = tr->next;
        }
        if (k > l)
            return head;
        tr = head;
        int z = k;
        ListNode *prev = head;
        while (z)
        {
            prev = prev->next;
            z--;
        }
        z = k;
        ListNode *curr = head;
        ListNode *prevNN = head;
        ListNode *temp = nullptr;
        while (z)
        {
            temp = curr;
            curr = curr->next;
            temp->next = prev;
            prev = temp;
            z--;
            l--;
        }
        ListNode *newH = temp;
        while (l - k >= 0)
        {
            int z = k;
            ListNode *prev = curr;
            ListNode *NN = curr;
            while (z)
            {
                prev = prev->next;
                z--;
            }
            z = k;
            while (z)
            {
                temp = curr;
                curr = curr->next;
                temp->next = prev;
                prev = temp;
                z--;
                l--;
            }
            prevNN->next = temp;
            prevNN = NN;
        }
        return newH;
    }
};
int main()
{
    Solution s;
    auto ans = s.reverseKGroup();
    return 0;
}
