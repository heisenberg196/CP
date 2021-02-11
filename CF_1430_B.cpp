#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n, k;
        cin>>n>>k;
        long long int a[n+1];
        for (long long int i = 0; i < n; i++)
            cin>>a[i];
     
        sort(a, a+n);
           if(n==2)
            {
                
                cout<<a[1]-a[0]<<endl;
                return 0;
            }
        if(a[n-1]==0){
            cout<<"0";
            return 0;
        }        

        for (long long int i = n-2; k >0 ; k--)
        {

            if(a[i]>0){

                a[n-1]+=a[i];
                a[i]=0;
                i--;
            }

        }
        
    cout<<a[n-1]<<endl;

    }
    
}