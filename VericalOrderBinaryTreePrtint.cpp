#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    int level;
    node *left, *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(int n)
{
    int d;
    cin >> d;
    node *root = new node(d);
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int c1, c2;
        cin >> c1 >> c2;
        node *f = q.front();
        q.pop();
        if (c1 != -1)
        {
            f->left = new node(c1);
            q.push(f->left);
        }
        if (c2 != -1)
        {
            f->right = new node(c2);
            q.push(f->right);
        }

    }
    return root;
}
void getLevelOrder(map<int, vector<int>> &mp, int l, node* root){
    if(root==NULL)
        return;
    mp[l].push_back(root->data);
    getLevelOrder(mp, l-1, root->left);
    getLevelOrder(mp, l+1, root->right);


}
void print(node *root)
{
    map<int, vector<int>> mp;
    int l = 0;
    getLevelOrder(mp, l, root);
    for(auto it : mp){
        for (int i = 0; i < mp[it.first].size(); i++)
        {   
            cout<<it.second[i]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int n;
    cin >> n;
    n = pow(2, n) - 1;
    node *root = build(n);
    print(root);
}