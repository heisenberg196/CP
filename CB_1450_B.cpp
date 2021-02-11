#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first + a.second < b.first + b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 1;
        cin >> n >> k;
        if(k==0){
            cout<<"-1"<<endl;
            continue;

            
        }
        vector<pair<int, int>> points;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            points.push_back(make_pair(x, y));
        }
        // for (auto it : points)
        // {
        //     cout<<it.first;
        // }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // cout<<(points[i].first + points[i].second - points[j].first - points[j].second)<<endl;
                if (abs(points[i].first + points[i].second - points[j].first - points[j].second) > k)
                {    
                    ans=0;
                    break;    
                }
            }
            if (ans==0)
                break;
        }
        if (ans==0)
            cout<<"-1"<<endl;
        else 
        cout<<"1"<<endl;
    }
}