
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        if(n==1)return prices;
        vector<int>right(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and prices[st.top()]>prices[i])
                st.pop();
            if(st.empty())
                right[i]=-1;
            else
                right[i]=st.top();
            st.push(i); 
        }
        for(int i=0;i<n;i++){
            if(right[i]!=-1)
                prices[i]-=prices[right[i]];
        }
        return prices;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
