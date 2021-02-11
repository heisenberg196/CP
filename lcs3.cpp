// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str1, str2, str3;
//     cin >> str1 >> str2 >> str3;
//     int s1 = str1.size(), s2 = str2.size(), s3 = str3.size();
//     int dp[s1 + 1][s2 + 1][s3 + 1];

//     for (int i = 0; i <= s1; i++)

//         for (int j = 0; j <= s2; j++)

//             for (int k = 0; k <= s3; k++)
//             {
//                 if (i == 0 || j == 0 || k == 0)
//                     dp[i][j][k] = 0;
//                 else
//                 {
//                     if (str1[i - 1] == str2[j - 1] && str2[j - 1] == str3[k - 1])
//                         dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
//                     else
//                         dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
//                 }
//             }

// cout << dp[s1][s2][s3];
// }

// In addition to the two sequences, an additional parameter k was introduced. A k-ordered LCS is defined to be the LCS of two sequences if you are allowed to change atmost k elements in the first sequence

#include <bits/stdc++.h>
using namespace std;
#define MAX 10 
int lcs(int dp[MAX][MAX][MAX], int arr1[], int n,
        int arr2[], int m, int k)
{
    // If at most changes is less than 0.
    if (k < 0)
        return -1e7;

    // If any of two array is over.
    if (n < 0 || m < 0)
        return 0;

    // Making a reference variable to dp[n][m][k]
    int &ans = dp[n][m][k];

    // If value is already calculated, return
    // that value.
    if (ans != -1)
        return ans;

    // calculating LCS with no changes made.
    ans = max(lcs(dp, arr1, n - 1, arr2, m, k),
              lcs(dp, arr1, n, arr2, m - 1, k));

    // calculating LCS when array element are same.
    if (arr1[n - 1] == arr2[m - 1])
        ans = max(ans, 1 + lcs(dp, arr1, n - 1,
                               arr2, m - 1, k));

    // calculating LCS with changes made.
    ans = max(ans, 1 + lcs(dp, arr1, n - 1,
                           arr2, m - 1, k - 1));

    return ans;
}

int main()
{

    int n, k, m;
    cin >> n >> m >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int dp[MAX][MAX][MAX]; 
    memset(dp, -1, sizeof(dp));
    cout << lcs(dp, a, n, b, m, k) << endl;
    // for (int i = 0; i <= n; i++)

    //     for (int j = 0; j <= n; j++)
    //         {
    //             if (i == 0 || j == 0 )
    //                 dp[i][j] = 0;
    //             else
    //             {
    //                 if (a[i - 1] == b[j - 1])
    //                     dp[i][j] = dp[i - 1][j - 1] + 1;
    //                 else
    //                     dp[i][j] = max(dp[i - 1][j], dp[i][j-1]);
    //             }
    //         }

    // cout<<dp[n][n];

    // int x=n, y=n, maxVal=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(dp[i][j]>=maxVal ){

    //             maxVal=dp[i][j];
    //             x=i;
    //             y=j;
    //         }
    //     }
    // }
    // // min(k,min(x, y));
    // // cout<<maxVal;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }

    // cout<<x<<" "<<y<<endl;
    // int m = min(k, min((n-x), (n-y)));
    // cout<<m<<endl;
    // maxVal+=m;

    // cout<<maxVal<<endl;
}
