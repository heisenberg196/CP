#include <bits/stdc++.h>
using namespace std;

bool patternMatch(string s1, string s2, int n, int m){
    if(m==0)
        return n==0;

    bool dp[n+1][m+1]={0};
    dp[0][0]=true;
    for (int i = 1; i<= m; i++)
    {
        if (s2[i-1]=='*'){
            dp[0][i]=dp[0][i-1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(s2[j-1]=='*'){
                dp[i][j]=dp[i-1][j] || dp[i][j-1];

            }
            else if(s2[j-1]=='?' || s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=false;
            }
            
        }
        
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    // cout<<dp[n][m]<<" ans"<<endl;
    return dp[n][m];
    
    
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<patternMatch(s1,s2, s1.size(), s2.size());
}