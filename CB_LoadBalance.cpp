#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int s, int e){
    int totalSum = 0;
    for (int i = s; i < e; i++)
        totalSum+=a[i];
    return totalSum;
}

int solve(int a[], int n, int i, int val){
    if(i>=n){
        return 0;
    }
    
    int diff = sum(a, 0, i) - val*(i) ;
    // cout<<diff<<endl;
    if(diff>0){
        return max(abs(diff), solve(a, n, i+1, val));
    }
    else{
        return max(abs(diff*-1), solve(a, n, i+1, val));

    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int val = sum(a, 0, n);
    // cout<<val;

    if((val/n)*n == val)
        cout<<solve(a, n, 1, val/n);    
    else 
    cout<<"-1";
}