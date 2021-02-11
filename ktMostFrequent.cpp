#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // priority_queue<pi, vector<pi>, greater<pi>> pq;
        map<int, int> pq;
        int n, m;
        cin>>n>>m;
        int tv;
        for (int i = 0; i < n; i++)
        {
            cin>>tv;
            if(pq.find(tv)==pq.end())
                pq[tv]=1;
            else
                pq[tv]++;
            int j=0;
            for (auto it =pq.begin(); it!=pq.end() and j!=m; it++, j++)
                cout<<it->second<<" ";
        }
        
        
    }
}