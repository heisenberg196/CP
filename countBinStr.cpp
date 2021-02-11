#include <bits/stdc++.h>
using namespace std;

long long int solve(int n, int i, int prev, long long int dp[])
{
    if (i > n or n==1)
        return 1;

    if (prev)
        return solve(n, i + 1, 0, dp);
    else
    {
        if (dp[i] != 0)
            return dp[i];
        return dp[i] = solve(n, i + 1, 0, dp) + solve(n, i + 1, 1, dp);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int dp[n + 1] = {0};
        
        int ans = pow(2, n);
        cout << solve(n, 1, 0, dp) << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std; 

// long long int countStrings(long long int n) 
// { 
// 	long long int a[n], b[n]; 
// 	a[0] = b[0] = 1; 
// 	for (long long int i = 1; i < n; i++) 
// 	{ 
// 		a[i] = a[i-1] + b[i-1]; 
// 		b[i] = a[i-1]; 
// 	} 
// 	return a[n-1] + b[n-1]; 
// } 


// // Driver program to test above functions 
//  int main() 
// { 
// 	cout << countStrings(30) << endl; 
// 	return 0; 
// }
