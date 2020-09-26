#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int l, p;
        cin>>l>>p;
        int c = a[l-1];
        if(l-2>=0)
            a[l-2]+=p-1;
        if(l<n)
            a[l]+=c-p;
        a[l-1]=0;
        // cout<<endl<<"after "<<i<<" kill : ";
        // for(int j=0; j<n; i++)
        //     cout<<a[j]<<" ";
        // cout<<endl;
    }
    for(int i=0; i<n; i++)
    cout<<a[i]<<endl;
       
}