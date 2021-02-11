#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> n >> x;
    int coins[n], c[x + 1]={0};

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
      
    }


    for (int i = 1; i <= x; i++)
    {
        c[i]=INT_MAX;
        cout<<i<<" ";
        for (int j = 0; j < n; j++)
        {
            cout<<j<<endl;
            if(i-coins[j]>=0){
                int subP = c[i-coins[j]];
                c[i] = min(subP+1, c[i]);}
            else break;
        }
        cout<<" ans for "<<i<<" "<<c[i]<<endl;   
    }
    cout<<c[x];
}