#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0;
    cin>>n;
    int a[n], b[n][4]={0};
    for (int  i = 0; i < n; i++)
        cin>>a[i];
    
    for (int i = 0; i < n; i++)
        for(int j=0; j<n; j++)
            if(b[j][a[i]]==0)
                {b[j][a[i]]=i+1;
                break;
    }
    for(int i=0; i<n; i++)
        if(b[i][1] && b[i][2] && b[i][3] )
        c++;
    cout<<c<<endl;
    for(int i=0; i<c; i++)
        cout<<b[i][1]<<" "<<b[i][2]<<" "<<b[i][3]<<endl;    
    
        
    
    
    
    
}