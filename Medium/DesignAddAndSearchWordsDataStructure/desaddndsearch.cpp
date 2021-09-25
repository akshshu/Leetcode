
#include <bits/stdc++.h>
using namespace std;
class WordDictionary
{
public:
    struct trie
    {
        int end = 0;
        trie *child[26] = {nullptr};
    };
    trie *root = new trie();
    WordDictionary()
    {
    }

    void addWord(string word)
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
    bool dfs(int i, string &word, trie *temp)
    {
        if (i == word.size())
        {
            if (temp->end == 1)
                return true;
            else
                return false;
        }
        int index = word[i] - 'a';
        if (index >= 0 and index <= 25)
        {
            if (!temp->child[index])
                return false;
            else
                return dfs(i + 1, word, temp->child[index]);
        }
        else
        {
            bool ans = false;
            for (int j = 0; j < 26; j++)
                if (temp->child[j])
                    ans = ans || dfs(i + 1, word, temp->child[j]);
            return ans;
        }
        return false;
    }
    bool search(string word)
    {
        trie *temp = root;
        return dfs(0, word, temp);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
