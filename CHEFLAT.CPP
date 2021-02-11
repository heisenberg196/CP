#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum1=0, sum2=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin>>a[i];
    
        for(int i=0; i<n; i++){
            if(i%2==0)
                sum1+=a[i];
            else
                sum2+=a[i];                    
            
        }
        if(sum1>sum2)
            cout<<sum1;
        else
            cout<<sum2;

        cout<<endl;
        
        
    }
}