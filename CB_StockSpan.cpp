#include <bits/stdc++.h>

using namespace std;


int main(){
    vector<int> p, s;
    int pH=0, pHP=-1, d, span=1;

    while(true){
        cin>>d;
        if(d==-1)
            break;
        p.push_back(d);
    }
     for (int i = 0; i < s.size(); i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
            cout<<"span "<<1<<" : "<<1<<endl;
    s.push_back(0);
    
    for (int i = 1; i < p.size(); i++)
    {
        int cP = p[i];
        while(!s.empty() and cP>=p[s.at(s.size()-1)]){
            s.pop_back();
        }
        if(!s.empty()){
            cout<<"span "<<i+1<<" : "<<i-s.at(s.size()-1)<<endl;
        }
        else
        {
            cout<<"span "<<i+1<<" : "<<i+1<<endl;
            
        }
        s.push_back(i);
        
    }
    

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
    
}