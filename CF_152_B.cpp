#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, m, xi, yi, k, cnt=0;
    cin>>n>>m>>xi>>yi;
    vector<pair<int, int>> vec;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        // cout<<"hello";
        ll t1, t2;
        cin>>t1>>t2;
        if(t1!=0)
        {if(((n-xi)/t1<(m-yi)/t2)){
            
            xi=xi+(n-xi)/t1;
            yi = yi+ ((n-xi)/t1)*t2;
            cnt+=abs((n-xi)/t1);
        }}
        else {
            yi=(m-yi)/t2;
            xi = xi+ ((m-yi)/t2)*t1;
            cnt+=abs((m-yi)/t2);
        }
        cout<<xi<<" "<<yi<<" "<<cnt<<endl;
        // vec.push_back({t1, t2});
    }
// cout<<cnt;
    
    
}