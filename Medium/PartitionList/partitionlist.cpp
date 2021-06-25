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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head||!head->next)
            return head;
        ListNode *traverse=head;
        ListNode *prevTraverse=nullptr;
        while(traverse&&traverse->val<x){
            prevTraverse=traverse;
            traverse=traverse->next;
        }
        ListNode*prevt2=prevTraverse;
        while(traverse){
            if(traverse->val<x){
                prevt2->next=traverse->next;
                if(prevTraverse){
                    traverse->next=prevTraverse->next;
                    prevTraverse->next=traverse;
                    prevTraverse=prevTraverse->next;
                }
                else{
                    traverse->next=head;
                    head=traverse;
                    prevTraverse=head;
                }
                traverse=prevt2;
            }
            prevt2=traverse;
            traverse=traverse->next;
        }
        return head;
    }
};
