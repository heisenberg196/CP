#include <bits/stdc++.h>
using namespace std;

long long int solve(int a[], int s, int e, int **dp)
{

    if ((s > e))
        return 0;
    if(dp[s][e]!=0)
    {
        return dp[s][e];
    }
    return  dp[s][e] = max(a[s] + min(solve(a, s + 1, e - 1, dp), solve(a, s + 2, e, dp)), a[e] + min(solve(a, s, e - 2, dp), solve(a, s + 1, e - 1, dp)));
}

int main()
{
    int n;
    cin >> n;
    int** dp = new int*[n];
    for (int i = 0; i < n; i++)
    {
        dp[i]= new int[n];
    }
    

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, 0, n - 1, dp);

    // cout<<max(x, y);
}