#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, d;
    cin>>n>>d;
    int m;
    cin>>m;
    // vector<pair<int, int>> a;
    int t1, t2, t3;
    vector<pair<int, int>> pts(4);
    pts.push_back({0, d});
    pts.push_back({d, 0});
    pts.push_back({n, n-d});
    pts.push_back({n-d, n});
    for (int i = 0; i < m; i++)
    {
        cin>>t1>>t2;
        if(
            (
            ((t1-pts[0].first)*(pts[1].second-pts[0].second) - (t2-pts[0].second)*(pts[1].second-pts[0].second)) and
            ((t1-pts[0].first)*(pts[1].second-pts[0].second) - (t2-pts[0].second)*(pts[1].second-pts[0].second))
    )
        )
    }



    

}