
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string find(string el,unordered_map<string,string>&parent){
        if(parent[el]=="#")
            return el;
        parent[el]=find(parent[el],parent);
        return parent[el];
    }
    void unions(string &root1,string &root2,unordered_map<string,int>&rank,unordered_map<string,string>&parent)
    {
        if(rank[root1]>rank[root2])
            parent[root2]=root1;
        else if(rank[root2]>rank[root1])
            parent[root1]=root2;
        else{
            parent[root1]=root2;
            rank[root2]++;
        }
    }
    bool areSentencesSimilarTwo(vector<string> &words1, vector<string> &words2, vector<vector<string>> &pairs) {
        if (words1.size() != words2.size())
            return false;
        unordered_map<string,string>parent;
        unordered_map<string,int> rank;
        int count = 1;
        for (auto pair : pairs)
        {
            parent[pair[0]]="#";
            parent[pair[1]]="#";
            rank[pair[0]]=0;
            rank[pair[1]]=0;
            string root1=find(pair[0],parent);
            string root2=find(pair[0],parent);
            if(root1!=root2)
                unions(root1,root2,rank,parent);
        }
        int i = 0;
        while (i < words1.size())
        {
            if(parent[words1[i]]!=parent[words2[i]])
                return false;
            i++;
        }
        return true;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
