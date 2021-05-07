#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int, int> ab1, pair<int, int>ab2){
    return ab1.second<ab2.second;
}

int main()
{
    ll n, r, avg;
    cin >> n >> r >> avg;
    vector<pair<int, int>> ab;
    float cavg = 0;

    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        cin>>t1>>t2;
        ab.push_back({t1, t2});
        cavg += t1;
    }
    ll cnt=0;
    float needed = avg*n;
    // cout<<cavg;
    sort(ab.begin(), ab.end(),comp);
    for(auto x : ab){
        // cout<<x.first<<x.second;
        if(needed>cavg){
            while(x.first<r and cavg<needed){
                // cout<<x.second<<" ";
                if((r-x.first)+cavg<needed){
                
                    cavg+=(r-x.first);
                    cnt+=x.second*(r-x.first);
                    break;
                }
                cavg++;
                cnt+=x.second;
                x.first++;
            }
        }
    }
    cout<<cnt;

    
}