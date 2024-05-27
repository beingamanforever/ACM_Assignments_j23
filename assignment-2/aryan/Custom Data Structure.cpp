#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class WordDictionary
{
private:
    vector<string> arr;

public:
    WordDictionary(){};
    void addWord(string word) { arr.push_back(word); }
    void print()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool search(string word)
    { // arr = bad dad mad
        bool flg = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            flg = 1;
            string ele = arr[j];
            if (ele.size() != word.size())
            {
                flg = 0;
                continue;
            }
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] != '.' && word[i] != ele[i])
                {
                    flg = 0;
                    break;
                }
            }
            if (flg)
                return true;
        }
        return false;
    }
};

int main()
{
    WordDictionary wordDictionary;
    wordDictionary.addWord("bad");
    wordDictionary.addWord("dad");
    wordDictionary.addWord("mad");
    wordDictionary.print();
    cout << wordDictionary.search("pad") << endl;
    cout << wordDictionary.search("bad") << endl;
    cout << wordDictionary.search(".ad") << endl;
    cout << wordDictionary.search("b..") << endl;

    // extra test cases:
    cout << wordDictionary.search("...") << endl;
    cout << wordDictionary.search("....") << endl;
    return 0;
}
