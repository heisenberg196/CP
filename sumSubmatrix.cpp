#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin>>a[i][j];

    vector<pair<pair<int, int>, pair<int, int>>> allRect;
    vector<pair<int, int>> allPoints;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            allPoints.push_back(make_pair(i, j));

    for(int i=0; i<allPoints.size(); i++)
        for (int j = 0; j < allPoints.size(); j++)
            allRect.push_back(make_pair(allPoints[i], allPoints[j]));

    int sum=0;
    for (int i = 0; i < allRect.size(); i++)
    {
        cout<<"("<<allRect[i].first.first<<" , "<<allRect[i].first.second<<") , ";
        cout<<"("<<allRect[i].second.first<<" , "<<allRect[i].second.second<<")";
        cout<<endl;
    }
    for (int i = 0; i < allRect.size(); i++)
    {
        for (int j = allRect[i].first.first; j <= allRect[i].second.first; j++)
        {
            for (int k = allRect[i].first.second; k <= allRect[i].second.second; k++)
            {
                sum+=a[j][k];
            }
            
        }

        
    }
    cout<<sum;

}