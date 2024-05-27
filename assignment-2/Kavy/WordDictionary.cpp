#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    map<char, Node *> children;
    bool b;

    Node()
    {
        b = false;
    }
};

class WordDictionary
{
private:
    Node *root;

    bool searchInNode(const string &word, Node *node, int index)
    {
        if (index == word.length())
        {
            return node->b;
        }

        char ch = word[index];
        if (ch == '.')
        {
            for (auto &child : node->children)
            {
                if (searchInNode(word, child.second, index + 1))
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            if (node->children.find(ch) != node->children.end())
            {
                return searchInNode(word, node->children[ch], index + 1);
            }
            else
            {
                return false;
            }
        }
    }

public:
    WordDictionary()
    {
        root = new Node();
    }

    void addWord(const string &word)
    {
        Node *node = root;
        for (char ch : word)
        {
            if (node->children.find(ch) == node->children.end())
            {
                node->children[ch] = new Node();
            }
            node = node->children[ch];
        }
        node->b = true;
    }

    bool search(const string &word)
    {
        return searchInNode(word, root, 0);
    }
};


int main()
{
    WordDictionary wD;
    wD.addWord("bad");
    wD.addWord("dad");
    wD.addWord("mad");

    cout << boolalpha;                
    cout << wD.search("pad") << endl; 
    cout << wD.search("bad") << endl; 
    cout << wD.search(".ad") << endl; 
    cout << wD.search("b.a") << endl; 

    return 0;
}