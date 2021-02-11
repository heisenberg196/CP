#include <bits/stdc++.h>
using namespace std;

int top_down(int n, int k, int dp[])
{
    if (n == 0)
        return 1;

    if (dp[n])
        return dp[n];
    int count = 0;

    for (int i = 1; i <= k; i++)
    {
        if (n - i >= 0)
            count += top_down(n - i, k, dp);
    }
    return dp[n] = count;
}

int bottom_up(int n, int k, int dp[])
{
    dp[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++)
            if(i-j>=0)
                dp[i]+=dp[i-j];        
    }
    return dp[n];
}

int optimised_sol(int n, int k, int dp[]){

    dp[0]=dp[1]=1;
    for(int i=2; i<=k; i++){
        dp[i]=2*dp[i-1];
    }
    for(int i=k+1; i<=n; i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    // for(int i=0; i<n; i++){
    //     cout<<endl<<dp[i];
    // }
    return dp[n];



}

int main()
{
    int n, k, dp[100] = {0};
    cin >> n >> k;

    // cout<<top_down(n, k, dp);
    // cout << bottom_up(n, k, dp);
    cout<<optimised_sol(n, k, dp);
    return 0;
}