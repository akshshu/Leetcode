
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* traveller=head->next;
        ListNode* oddHead=head;
        ListNode* evenhead=head->next;
        ListNode* eventail=evenhead;
        int k=2;
        while(traveller)
        {
            if(k%2==0)
                traveller=traveller->next;
            else{
                evenhead->next=traveller->next;
                evenhead=evenhead->next;
                oddHead->next=traveller;
                oddHead=traveller;
                traveller->next=eventail;
                traveller=evenhead;
            }
            k++;
        }
        return head;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
