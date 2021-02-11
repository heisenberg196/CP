#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max_so_far=INT_MIN, curr_max=a[0];
    for(int i=1; i<n; i++){
        // if(a[i]>0)
        curr_max+=a[i];
        if(curr_max<=0){
            curr_max=0;
        }
        max_so_far=max(max_so_far, curr_max);

    }
    cout<<max_so_far;
    
}