#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, count=0;
    cin>>n>>x>>y;
    int a[n];
    int z = y-x;
    int smallest_factor=-1;
    
    for (int i = 2; i < z; i++)
        if(z%i==0 && (i*n)>=z)
            {smallest_factor = i;
            }
    if(smallest_factor==-1){
        smallest_factor=z;
    }
    cout<<"smallest factor"<<smallest_factor<<endl;
    for (int i = x; i <= z; i=i+smallest_factor)
    {
        a[count]=i;
        ++count;
    }
    if(count<n-1){
        for (int i = x-smallest_factor; i >= 0; i=i-smallest_factor)
        {
        a[count]=i;
        ++count;
        }
    }
       if(count<n-1){
        for (int i = y+smallest_factor; count<n-1; i=i+smallest_factor)
        {
        a[count]=i;
        ++count;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

}