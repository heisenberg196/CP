// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int dp[n+1];
//     dp[0]=INT_MIN;
//     for(int i=1; i<n; i++)
//         dp[i]=INT_MAX;
    
//     // for (int i = 0; i < n; i++)
//     // {
   
//     //     for (int  j = 0; j < n; j++)
//     //     {
//     //         if(dp[j]<a[i] && a[i]<dp[j+1])
//     //             dp[j+1]=a[i];
//     //     }
//     //     for(int j=0; j<=n; j++){
//     //         cout<<dp[j]<<'\t';
//     //     }
//     //     cout<<endl;
        
        
//     // }
    
//     for(int i=0; i<n; i++){
//         int l = upper_bound(dp, dp+n+1, a[i])-dp;
//         if(dp[l-1]<a[i] && a[i]<dp[l]){
//             dp[l]=a[i];
//         }
//     }
//     int lis=0;
//     for (int i = 1; i <= n; i++)
//     {
//         if(dp[i]!=INT_MAX)
//         lis=i;
//     }
//     cout<<lis;
    
    
// }
/* Dynamic Programming C++ implementation 
of LIS problem */
#include<bits/stdc++.h> 
using namespace std; 
	
/* lis() returns the length of the longest 
increasing subsequence in arr[] of size n */
int lis( int arr[], int n ) 
{ 
	int lis[n]; 

	lis[0] = 1; 

	/* Compute optimized LIS values in 
	bottom up manner */
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j]+1) 
				lis[i] = lis[j] + 1; 
	} 

	// Return maximum value in lis[] 
	return *max_element(lis, lis+n); 
} 
	
/* Driver program to test above function */
int main() 
{ 
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 40 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printf("Length of lis is %d\n", lis( arr, n ) ); 

	return 0; 
}
