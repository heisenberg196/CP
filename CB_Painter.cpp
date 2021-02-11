#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n){
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
    
}

int possible(int val, int a[], int n, int k, int t){
    int currSum = 0, currpt=1, finalSum=0;
    for(int i=0; i<n; i++){
        if(a[i]*t+currSum<val){
            finalSum+=currSum;
            currSum+=a[i];
        }
        else{
            currSum = a[i]*t;
            currpt+=1;
        }
       
    } 
     if(currpt>k){
            return 0;
        }
        return finalSum;
}

int main(){
    int n, k,  t;
    cin>>n>>k>>t;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    sort(a, a+n);
    int l = a[0]*t, r = sum(a, n)*t, ans=INT_MAX;   
    // cout<<"r "<<r<<endl;
    while (l<=r)
    {
        int mid = (l+r)/2;
        int fs = possible(mid, a, n, k, t);
        if(fs){

            ans = min(ans, fs);
            r=mid-1;
            cout<<ans<<endl;
        }
        else{
            l=mid+1;
        }
    }
     cout<<ans;
}