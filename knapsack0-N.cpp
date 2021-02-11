// #include <bits/stdc++.h>
// using namespace std;


// bool comp(const pair<int, int> &a, const pair<int, int> &b){
//     float x = (float)a.second/(float)a.first;
//     float y = (float)b.second/(float)b.first;
//     return (x) < (y);
// }
// bool sortbysec(const pair<int,int> &a, 
//               const pair<int,int> &b) 
// { 
//     return ((a.second/a.first) < (b.second/b.first)); 
// } 
// int main()
// {
//     int n, s;
//     cin >> n >> s;
//     vector<pair<int, int>> wv;
//     if(n==0 or s==0){
//         cout<<"0";
//         return 0;
//     }
//     int w[n], v[n];
//     for (int i = 0; i < n; i++)
//         cin >> w[i];
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     for (int i = 0; i < n; i++)
//     {
//         wv.push_back(make_pair(w[i], v[i]));
//     }
    
//     sort(wv.begin(), wv.end(), comp );
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout<<wv[i].first<<" "<<wv[i].second<<endl;
//     // }
    
//     // sort(vect.begin(), vect.end(), sortbysec); 
  
//     // Printing the sorted vector(after using sort()) 
//     // cout << "The vector after sort operation is:\n" ; 
//     // for (int i=0; i<n; i++) 
//     // { 
//     //     // "first" and "second" are used to access 
//     //     // 1st and 2nd element of pair respectively 
//     //     cout << vect[i].first << " "
//     //          << vect[i].second << endl; 
//     // } 
//     int currind =n-1, val=0;
//     while (w>0 and currind>=0)
//     {
//         if(s-wv[currind].first>=0)
//         {
//             s-=wv[currind].first;
//             val += wv[currind].second;
//             // cout<<wv[currind].first<<" "<<wv[currind].second<<" "<<val<<" "<<s<<endl;
//         }
//         else{
//             currind--;
//         }
//     }
//     cout<<val<<endl;
    

    
// }


// C++ program to find maximum achievable value
// with a knapsack of weight W and multiple
// instances allowed.
#include<bits/stdc++.h>
using namespace std;

// Returns the maximum value with knapsack of
// W capacity
int unboundedKnapsack(int W, int n, 
					int val[], int wt[])
{
	// dp[i] is going to store maximum value
	// with knapsack capacity i.
	int dp[W+1];
	memset(dp, 0, sizeof dp);

	// Fill dp[] using above recursive formula
	for (int i=0; i<=W; i++)
	for (int j=0; j<n; j++)
		if (wt[j] <= i)
			dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);

	return dp[W];
}

// Driver program
int main()
{
    int n, W;
    cin >> n >> W;
    vector<pair<int, int>> wv;
    if(n==0 or W==0){
        cout<<"0";
        return 0;
    }
    int wt[n], val[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];


	cout << unboundedKnapsack(W, n, val, wt);

	return 0;
}
