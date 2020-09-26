#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* code */
    int n, d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='D')
        d++;
    }
    if(d>n/2)
    cout<<"DANIK";
    else if(d<n/2)
    cout<<"ANTOV";
    else 
    cout<<"FRIENDSHIP";
    return 0;
}
