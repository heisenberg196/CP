#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dp[100][100]={0};
int solve(int a[], int n, int cnt, int i, int e ){
    if(i>=e)
    return cnt;
    if(dp[i][e])
    return dp[i][e];
    if(2*a[i]<a[e]){
        return dp[i][e] = min(solve(a, n, cnt+1, i+1, e), solve(a, n, cnt+1, i, e-1));
    }
    return cnt;
}

int main(){

    // #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
// #endif 

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);
    cout<<solve(a, n, 0, 0, n-1);
return 0;

}