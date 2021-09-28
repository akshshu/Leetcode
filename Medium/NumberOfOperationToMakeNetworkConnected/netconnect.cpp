
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>parent;
    vector<int>rank;
    int find(int el){
        if(parent[el]==-1)
            return el;
        parent[el]=find(parent[el]);
        return parent[el];
    }
    void unions(int root1,int root2)
    {
        if(rank[root1]>rank[root2])
            parent[root2]=root1;
        else if(rank[root2]>rank[root1])
            parent[root1]=root2;
        else 
        {
            parent[root1]=root2;
            rank[root2]++;
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n,-1);
        rank.resize(n,0);
        int extrawire=0;
        for(auto edge:connections){
            int from=edge[0];
            int to=edge[1];
            int root1=find(from);
            int root2=find(to);
            if(root1==root2)
            {
                extrawire++;
            }
            else
                unions(root1,root2);
        }
        int count=-1;//to not count the single root becuase there is atleast 1 connection so we'll have atleast 1 root and itself is considered connected
        for(int i=0;i<n;i++){
            if(parent[i]==-1)
                count++;
        }
        if(extrawire>=count)
            return count;
        else
            return -1;
    }
};
int main(){
    Solution s;
    auto ans=s.func();
    return 0;
}
