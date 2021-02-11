#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    int n;
    cin >> n;
    int rad[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> rad[i][0] >> rad[i][1] >> rad[i][2];
    }
    // vecotr<pair<int, int>> arr;
    // arr.push_back({xa, ya});
    // arr.push_back({xa, yb});
    // arr.push_back({xb, ya});
    // arr.push_back({xb, yb});
    int cnt=0;
    for (int i = xa; i <= xb; i++)
    {
        bool d1=false, d2=false;
        for (int j = 0; j < n; j++)
        {
            int dist1 = sqrt(pow(rad[j][0]-i, 2)+pow(rad[j][1]-ya, 2));
            int dist2 = sqrt(pow(rad[j][0]-i, 2)+pow(rad[j][1]-yb, 2));
            if(dist1<=rad[j][2])
            d1=true;
            if(dist2<rad[j][2])
            d2=true;
        }
        if(d1==false)
        cnt++;
        if(d2==false)
        cnt++;       
    }
    for (int i = ya+1; i < yb; i++)
    {
        bool d1=false, d2=false;
        for (int j = 0; j < n; j++)
        {
            int dist1 = sqrt(pow(rad[j][0]-i, 2)+pow(rad[j][1]-xa, 2));
            int dist2 = sqrt(pow(rad[j][0]-i, 2)+pow(rad[j][1]-xb, 2));
            if(dist1<=rad[j][2])
            d1=true;
            if(dist2<rad[j][2])
            d2=true;
        }
        if(d1==false)
        cnt++;
        if(d2==false)
        cnt++;       
    }
    cout<<cnt;
    

}