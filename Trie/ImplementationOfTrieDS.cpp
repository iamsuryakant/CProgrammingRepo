#include<bits/stdc++.h>

using namespace std;

const int ALPHABET_SIZE = 26;   

struct TrieNode {

    struct TrieNode *child[ALPHABET_SIZE];

    bool isEnd;

};

struct TrieNode *getNode()
{
    struct TrieNode *pNode = new TrieNode;

    pNode->isEnd = false;

    for(int i = 0; i < ALPHABET_SIZE; i++)
    {
        pNode->child[i] = NULL;
    }

    return pNode;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for(int i = 0; i < key.size(); i++)
    {
        int index = key[i] - 'a';

        if(!pCrawl->child[index])
        {
            pCrawl->child[index] = getNode();
        }
        pCrawl = pCrawl->child[index];
    }

    pCrawl->isEnd = true;
}

bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for(int i = 0; i < key.size(); i++)
    {
        int index = key[i] - 'a';
        if(!pCrawl->child[index])
        {
            return false;
        }
        pCrawl = pCrawl->child[index];
    }
    return (pCrawl != NULL && pCrawl->isEnd);
}


int main()
{
    string key[] = {"bad","bat","geek","geeks","cat","cut"};

    int n = sizeof(key)/sizeof(key[0]);

    struct TrieNode *root = getNode();

    for(int i = 0; i < n; i++)
    {
        insert(root, key[i]);
    }
    
    search(root, "bad")? cout << "true\n" : cout << "false\n";
    search(root, "gee")? cout << "true\n" : cout << "false\n";

    return 0;
}