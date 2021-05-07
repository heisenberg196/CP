#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial( ll n){
    return (n==1 || n==0 ) ? 1 : factorial(n-1)*n;
}

int main(){
    int n;
    cin>>n;
    map<int, vector<pair<int, int>>> ptsx;
    map<int, vector<pair<int, int>>> ptsy;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin>>t1>>t2;
        ptsx[t1].push_back({t1, t2});
        ptsy[t2].push_back({t1, t2});
    }
    // set<pair<int, int>> pts;
    ll ans = 0;
    for (auto x : ptsx)
    {
        if(x.second.size()>1){
            // for (auto y : x.second)
            // {
            //     pts.insert(y);
            // }
            cout<<x.first<<" "<<x.second.size()<<endl;
            ans= ans + factorial(x.second.size()-1);
            // cout<<ans;
        }
    }
        for (auto x : ptsy)
    {
        if(x.second.size()>1){
            // for (auto y : x.second)
            // {
            //     pts.insert(y);
            // }
            cout<<x.first<<" "<<x.second.size()<<endl;

            ans= ans + factorial(x.second.size()-1);
            // cout<<ans;
        }
    }
    cout<<ans;

    
}