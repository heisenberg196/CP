#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int m = s1.size(), n = s2.size();
    int dp[m+1][n+1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;

            else if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }            
            else{
                dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    // cout<<dp[m][n];
    int i = m, j = n;
    int ind = dp[i][j];
    char ss[ind];

    ss[ind] = '\0';
    while(i>0 and j>0){
        // cout<<"h";
        if(s1[i-1]==s2[j-1]){
            ss[ind-1]=s1[i-1];
            i--;
            j--;
            ind--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;

        }
        else{
            j--;
        }
    }
    cout<<ss;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<dp[i][j];
    //     }
        
    // }
    
}