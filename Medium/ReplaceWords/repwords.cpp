
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct trie
    {
        int end = 0;
        trie *child[26] = {nullptr};
    };
    trie *root = new trie();
    bool findPref(string &t, string &p, trie *root)
    {
        for (char x : p)
        {
            if (root->child[x - 'a'])
                t += x;
            else
                return false;
            root = root->child[x - 'a'];
            if (root->end)
                return true;
        }
        return false;
    }
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        for (string str : dictionary)
        {
            trie *temp = root;
            for (char x : str)
            {
                if (temp->child[x - 'a'] == nullptr)
                    temp->child[x - 'a'] = new trie();
                temp = temp->child[x - 'a'];
            }
            temp->end++;
        }
        string s = "";
        string ans = "";
        for (int i = 0; i <= sentence.size(); i++)
        {
            if (sentence[i] == ' ' || i == sentence.size())
            {
                if (s.size())
                {
                    trie *temp = root;
                    string t = "";
                    if (findPref(t, s, temp))
                        ans += t;
                    else
                        ans += s;
                    ans += ' ';
                }
                s = "";
            }
            else
                s += sentence[i];
        }
        ans.pop_back();
        return ans;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
