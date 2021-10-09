
#include <bits/stdc++.h>
using namespace std;
class StreamChecker
{
public:
    struct trie
    {
        trie *child[26] = {nullptr};
        int end = 0;
    };
    trie *root = new trie();
    string temp;
    void insert(string &s)
    {
        trie *curr = root;
        for (char x : s)
        {
            if (curr->child[x - 'a'] == nullptr)
                curr->child[x - 'a'] = new trie();
            curr = curr->child[x - 'a'];
        }
        curr->end = 1;
    }
    bool check(string &s)
    {
        trie *curr = root;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (curr->child[s[i] - 'a'] == nullptr)
                return false;
            curr = curr->child[s[i] - 'a'];
            if (curr->end)
                return true;
        }
        return false;
    }
    StreamChecker(vector<string> &words)
    {
        for (string s : words)
        {
            reverse(s.begin(), s.end());
            insert(s);
        }
    }
    bool query(char letter)
    {
        temp += letter;
        return check(temp);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
int main()
{
    Solution s;
    auto ans = s.func();
    return 0;
}
