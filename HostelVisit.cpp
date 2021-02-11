#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    set<int> ans;
        int q, x, y;

    for (int i = 0; i < n; i++)
    {
        cin>>q;
        // cout<<q<<" "<<x<<" "<<y<<endl;
        if(q==1){
            cin>>x>>y;
            ans.insert((pow(x, 2)+pow(y,2)));

        }
        else if(q==2){
            // cout<<"ENtered 2"<<endl;
            int ct=1;
            for (auto it : ans)
            {
                // cout<<ct;
                if(ct==k){
                    cout<<it<<endl;
                    break;
                }
                ct++;
            }
            
        }
    }
    
}