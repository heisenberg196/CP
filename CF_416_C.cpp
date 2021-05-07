#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<pair<int, int>, int> cpi1, pair<pair<int, int>, int> cpi2)
{
    return cpi1.first.second > cpi2.first.second;
}

int main()
{
    ll n, k;
    vector<pair<pair<int, int>, int>> cpi;
    vector<int> karr;
    cin >> n;

    for (int i = 0; i < n; i++)

    {
        int t1, t2;
        cin >> t1 >> t2;
        cpi.push_back({{t1, t2}, i + 1});
    }
    // cout << "hello";
    cin >> k;
    vector<pair<int, int>> sol;
    for (int i = 0; i < k; i++)
    {
        int t;
        cin >> t;
        karr.push_back(t);
    }
    // cout << "hello" << endl;
    int earning=0;
    sort(cpi.begin(), cpi.end(), comp);
    // sort(karr.begin(), karr.end());

    for (auto x : cpi)
    {
        // int mid = k / 2, s = 0, e = k - 1;
        int ans = -1;
        // while (s <= e)
        // {
        //     mid = (s + e) / 2;
        //     if (karr[mid] == x.first.first)
        //     {
        //         ans = mid;
        //         break;
        //     }
        //     else if (karr[mid] < x.first.first)
        //     {
        //         s = mid + 1;
        //     }
        //     else
        //     {
        //         ans = mid;
        //         e = mid - 1;
        //     }
        //     // cout<<mid<<" ";
        // }
        // cout<<"for "<<x.second<<" "<<x.first.first<<" "<<x.first.second<<" " <<ans<<endl;
        ans=INT_MAX;
        for (int i = 0; i < k; i++)
        {
            if(karr[i]<x.first.first){
                continue;
            }
            else{
                if(karr[i]<ans){
                ans=i;
                karr[i]=-1;}
                // break;
            }
        }
        
        if (ans != INT16_MAX)
        {
            // cout<<x.second<<endl;
            // karr.erase(karr.begin() + ans);
            earning+=x.first.second;
            sol.push_back({x.second, ans+1});   
        }
    }
    cout<<sol.size()<<" "<<earning<<endl;
    for (auto x : sol)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
}