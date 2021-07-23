
#include<bits/stdc++.h>
using namespace std;
class FrontMiddleBackQueue {

public:
    deque<int>ans;
    deque<int>ans2;  
    FrontMiddleBackQueue() {
    }
    void pushFront(int val) {
        if(ans.size()!=ans2.size())
        {
            ans2.push_front(ans.back());
            ans.pop_back();            
        }     
        ans.push_front(val);  
    }
    
    void pushMiddle(int val) {

        if(ans.size()!=ans2.size())
        {   
            ans2.push_front(ans.back());
            ans.pop_back();
        }
        ans.push_back(val);
    }
    
    void pushBack(int val) {
        if(ans.size()==ans2.size())
        {
            if(ans.size()==0)
                ans.push_front(val);
            else
            {
                ans.push_back(ans2.front());
                ans2.pop_front();
                ans2.push_back(val);
            }
            
        }
        else
            ans2.push_back(val);
    }
    
    int popFront() {
        if(!ans.size()&&!ans2.size())
            return -1;
        int elem=ans[0];
        if(ans.size()==ans2.size())
        {
            ans.push_back(ans2.front());
            ans2.pop_front();
        }
        ans.pop_front();
        return elem;
        
    }
    
    int popMiddle() {
        if(!ans.size()&&!ans2.size())
            return -1;
        int elem=ans[ans.size()-1];
        ans.pop_back();
        if(ans.size()!=ans2.size())
        {
            ans.push_back(ans2.front());
            ans2.pop_front();
        }
        return elem;
    }
    
    int popBack() {
        if(!ans.size()&&!ans2.size())
            return -1;
        if(ans.size()!=ans2.size())
        {
            ans2.push_front(ans.back());
            ans.pop_back();
        }

        int elem=ans2[ans2.size()-1];
        ans2.pop_back();
        return elem;

    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
