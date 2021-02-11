#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        float k;
        cin>>n>>k;
        float a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        k/=100;
        float sum=0;
        for (int i = 1; i < n; i++)
        {
            for(int q=0; q<i; q++){
                sum+=a[q];
            }
            cout<<a[i]/sum<<" ";
            if(a[i]/sum>k){
                float l=0;
                while(true)
                {
                    if((a[i])/(sum+l)<=k){
                        break;
                    }
                    else{
                        l++;
                    }
                }
                
                for (int j = 0; j < i-1; j++)
                {
                    a[i]+=l;
                }
                
            }
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
        
    }
    
}