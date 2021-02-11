#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w;
    cin>>n>>w;
    int p[n+1], dp[w+1];
    for (int i = 0; i < w+1; i++)
    {
        dp[i]=INT_MAX;
    }
    
  
    for (int i = 1; i <= n; i++)
        cin>>p[i];
    for (int i = 1; i <= w; i++)
    dp[1]=p[1];
    cout<<dp[1];
    for (int i = 2; i <= w; i++)
    {
        int j=max(1, i-5);
        while (j<i)
        {
            dp[i] = min(dp[i], dp[i-j]+p[j]);
            j++;
        }
        
    }
    cout<<dp[w];
    

}