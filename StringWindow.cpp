#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char ch;
    unordered_map<char, Node *> children;
    bool terminal;
    Node(char d)
    {
        ch = d;
        terminal = false;
    }
};

class Trie
{
    Node *root;
    int cnt;

public:
    Trie()
    {
        root = new node('\0');
        cnt = 0;
    }
    Node *insert(char *s)
    {
        Node *temp = root;
        for (int i = 0; w[i] != '\0'; i++)
        {
            if (w[i] == ' ')
                continue;
            if (temp->children.count(w[i]))

                temp = temp->children(w[i]);
            else
            {
                Node *n = new Node(w[i]);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }
    bool find(char* s, node* root=this.root){
        if(temp->children.count(s[0])==1){
            if(find)
        }
    }
};



int main()
{
    string s1, s2;
    cin.getline(s1, 1000);
    cin.getline(s2, 1000);
    Trie T;
    char *ptr;
    ptr = strtok(s1, " ");
    while (ptr != NULL)
    {
        T.insert(ptr);
        strtok(NULL, " ");
    }
    T.find(s2);
}