#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string t, p;
    getline(cin, t);
    getline(cin, p);
    bool haseverything = true, inorder = false;
    int arr_t[26] = {0}, arr_p[26] = {0};
    for (int i = 0; i < t.length(); i++)
    {
        arr_t[t[i] - 'a']++;
    }
    for (int i = 0; i < p.length(); i++)
    {
        arr_p[p[i] - 'a']++;
    }

    for (int i = 0; i < t.length(); i++)
    {
        cout<<arr_p[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < p.length(); i++)
    {
        cout<<arr_t[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        if (arr_p[i] > arr_t[i])
        {
            haseverything = false;
            break;
        }
    }
    if (!haseverything)
    {
        cout << "need tree";
        return 0;
    }
    int i = 0;
    int cnt = 0;
    for (; i < p.length(); i++)
    {
        for (int j = 0; j < t.length(); j++)
        {
            if (t[j] == p[i])
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt)
        inorder=true;

    if(t.length() == p.length() and haseverything ){
        cout<<"array";
    }        
    
    else if(t.length() != p.length() and inorder){
        cout<<"automation";
    }        
    else if(t.length() != p.length() and  haseverything and !inorder)
    cout<<"both";
    
}