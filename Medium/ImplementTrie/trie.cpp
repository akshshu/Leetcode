
#include <bits/stdc++.h>
using namespace std;
class Trie
{
public:
    struct trie
    {
        int end = 0;
        trie *child[26] = {nullptr};
    };
    Trie()
    {
    }
    trie *root = new trie();
    void insert(string word)
    {
        trie *temp = root;
        for (char x : word)
        {
            int index = x - 'a';
            if (!temp->child[index])
                temp->child[index] = new trie();
            temp = temp->child[index];
        }
        temp->end = 1;
    }

    bool search(string word)
    {
        trie *temp = root;
        for (char x : word)
        {
            int index = x - 'a';
            if (!temp->child[index])
                return false;
            temp = temp->child[index];
        }
        if (temp->end)
            return true;
        return false;
    }

    bool startsWith(string prefix)
    {
        trie *temp = root;
        for (char x : prefix)
        {
            int index = x - 'a';
            if (!temp->child[index])
                return false;
            temp = temp->child[index];
        }
        return true;
    }
};
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
