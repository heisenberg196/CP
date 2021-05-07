#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> pr;
    // cout<<"hello";

    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin>>t1>>t2;
        pr.push_back({t1, t2});
        // cin>>pr[i].first>>pr[i].second;
    }
    // cout<<"hello";
    string ans="";
    int asum=0, bsum=0;
    for (int i = 0; i < n; i++)
    {
     
        if (abs(bsum+pr[i].second - asum)<=500)
        {
            bsum+=pr[i].second;
            ans+="G";
        }
        //    if(abs(asum+pr[i].first-bsum)<=500)
        else {
            asum+=pr[i].first;
            ans+="A";
        }

        
    }
    if(abs(asum-bsum)>500)
    cout<<"-1";
    else
    cout<<ans;
}