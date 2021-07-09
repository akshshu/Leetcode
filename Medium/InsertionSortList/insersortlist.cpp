
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
    ListNode *insertionSortList(ListNode *head)
    {

        ListNode *newNode = new ListNode(INT_MIN);
        newNode->next = head;
        ListNode *mainFrnd = newNode;
        int maxTillNow = head->val;
        while (head)
        {
            ListNode *tempFrnd = nullptr;
            ListNode *temp = newNode;
            if (head->val > maxTillNow)
                maxTillNow = head->val;
            else
            {
                while (temp != head)
                {
                    if (temp->val > head->val)
                    {
                        mainFrnd->next = head->next;
                        head->next = temp;
                        tempFrnd->next = head;
                        head = mainFrnd;
                        break;
                    }
                    tempFrnd = temp;
                    temp = temp->next;
                }
            }
            mainFrnd = head;
            head = head->next;
        }
        return newNode->next;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
