#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
    int k;
    string a;
    cin>>a>>k;
    map<int, vector<int>> num_map;
    for (int i = 0; i < a.size(); i++)
    {
        num_map[a[i]-'0'].push_back(i);
    }
    for (auto i = num_map.rbegin(); i != num_map.rend(); i++)
    {
        cout<<i->first<<" : ";
        for (auto j : i->second)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    
    // for (int i = 0; i < a.size()-1 and k>0; i++)
    // {
    //     if(a[i]-a[i+1]<0){
    //         char t;
    //         t=a[i];
    //         a[i]=a[i+1];
    //         a[i+1]=t;
    //         k--;
    //         i=-1;
    //     }
    // }

    // cout<<a;
    
}