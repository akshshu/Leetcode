
#include <bits/stdc++.h>
using namespace std;

class WordFilter
{
public:
    struct trie
    {
        trie *child[27] = {nullptr};
        int ind;
        void insert(trie *root, string s, int i)
        {
            for (char x : s)
            {
                int index = x - 'a';
                if (!root->child[index])
                {
                    root->child[index] = new trie();
                }
                root = root->child[index];
                root->ind = i;
            }
        }
        int startwith(trie *root, string s)
        {
            for (char x : s)
            {
                int index;
                index = x - 'a';
                if (!root->child[index])
                {
                    return -1;
                }
                root = root->child[index];
            }
            return root->ind;
        }
    };
    trie *root = nullptr;
    WordFilter(vector<string> &words)
    {
        root = new trie();
        for (int i = 0; i < words.size(); i++)
        {
            string temp = '{' + words[i];
            for (int j = words[i].size() - 1; j >= 0; j--)
            {
                temp = words[i][j] + temp;
                root->insert(root, temp, i);
            }
        }
    }
    int f(string prefix, string suffix)
    {
        string word = suffix + '{' + prefix;
        return root->startwith(root, word);
    }
};

int main()
{
    return 0;
}
