#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin>>a[i][j];
    cout<<endl<<"Enter Key ";
    int key;
    cin>>key;
    int i=0, j=n-1;
    while(i<m && j>=0){
        if(a[i][j]==key){
            cout<<"Found at "<<i<<" "<<j;
            return 0;
        }
        else if(a[i][j]<key)
            i++;
        else if(a[i][j]>key)
            j--;
    }
    cout<<"Not Found";
    
}