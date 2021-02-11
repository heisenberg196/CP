#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int dp[100]={-1};
    dp[1]=0;
    for (int i = 2; i <= x; i++)
    {
        int a=INT_MAX, b=INT_MAX, c=INT_MAX;
        if(i%3==0)
            a=dp[i/3];
        if(i%2==0)
            b=dp[i/2];
        
        c=dp[i-1];
        dp[i]=min(min(a, b), c)+1;
    }
    cout<<dp[x]<<endl;
    
}