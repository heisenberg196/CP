#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, c=0;
        int a[n][m];
        cin>>n>>m;
        
        for (int i = 0; i < n; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];

        for (int i = 0; i < n/2; i++)
        {
            for(int j=0; j<m/2; j++){
                int x = a[i][j], y=a[i][m-j-1], z=a[n-i-1][j];
                int avg = (x+y+z)/3;
                    c;
                    a[i][j]=avg;
                    c++;
                    a[i][m-j-1]=avg;
                    c++;
                    a[n-i-1][j]=avg;
            }
        }
        cout<<c<<endl;

    }
}