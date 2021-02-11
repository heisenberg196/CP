#include <bits/stdc++.h>
using namespace std;

int solve(int w[], int v[], int s, int n, int **dp)
{
    if (n < 0 || s == 0)
        return 0;

    if (dp[n][s] != -1){

        return dp[n][s];
}
    if (w[n] > s)
    {
        return dp[n][s] = solve(w, v, s, n - 1, dp);
    }
    else
    {

        return dp[n][s] = max(v[n] + solve(w, v, s - w[n], n - 1, dp), solve(w, v, s, n - 1, dp));
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    int **dp;
    dp = new int *[n];
    for (int i = 0; i < n; i++)
        dp[i] = new int[s + 1];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < s + 1; j++)
            dp[i][j]=-1;

    int w[n], v[n];
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << solve(w, v, s, n - 1, dp);
}