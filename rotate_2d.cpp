#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int k=m, l=n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin>>a[i][j];
        
    //  DIRECTLY IN RIGHT
         
    // int b[n][m];
    // for(int i=0; i<m ;i++){
    //     for (int j = 0; j < n; j++)
    //     {
    //         b[j][n-i-1]=a[i][j];   
    //     }   
    // }

    // for O(1) space reverse each row then transpose the mat 



    
    // IN LEFT
    for(int i=0; i<m; i++){
        for(int j=0; j<n/2; j++){
            swap(a[i][j], a[i][n-j-1]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<j)
            swap(a[i][j], a[j][i]);
        }
        
    }

    for (int i = 0; i < k; i++)
        for (int j = 0; j < l; j++)
            cout<<a[i][j]<<" ";

}