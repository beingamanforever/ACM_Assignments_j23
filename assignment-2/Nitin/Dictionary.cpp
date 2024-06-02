#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool is_end_of_word;

    TrieNode() : is_end_of_word(false) {}
};

class WordDictionary {
private:
    TrieNode* root;

    bool searchInNode(const std::string& word, int index, TrieNode* node) {
        if (index == word.length()) {
            return node->is_end_of_word;
        }
        
        char char_at_index = word[index];
        if (char_at_index == '.') {
            for (auto& child : node->children) {
                if (searchInNode(word, index + 1, child.second)) {
                    return true;
                }
            }
            return false;
        } else {
            if (node->children.find(char_at_index) != node->children.end()) {
                return searchInNode(word, index + 1, node->children[char_at_index]);
            } else {
                return false;
            }
        }
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(const std::string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->is_end_of_word = true;
    }

    bool search(const std::string& word) {
        return searchInNode(word, 0, root);
    }

    ~WordDictionary() {
        // A function to delete the trie nodes recursively could be added here
        // to avoid memory leaks. This is not implemented here for simplicity.
    }
};

int main() {
    WordDictionary wordDictionary;
    wordDictionary.addWord("bad");
    wordDictionary.addWord("dad");
    wordDictionary.addWord("mad");

    cout<< wordDictionary.search("pad")<<endl; // Output: 0 (false)
    cout<< wordDictionary.search("bad")<<endl; // Output: 1 (true)
    cout<< wordDictionary.search(".ad")<<endl; // Output: 1 (true)
    cout<< wordDictionary.search("b..")<<endl; // Output: 1 (true)
    return 0;
}
