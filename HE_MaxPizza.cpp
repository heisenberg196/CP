#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int n){
    
    long long int max = 0;
    sort(a.begin(), a.end());
    // cout<<"Sorted "<<endl;
    int i=0, j=n-1
    // cout<<max;
    return max;
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    // cout<<"Enter array "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // cout<<"Solving ... "<<endl;
    cout<<solve(a, n);
}