#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int key;
    cin>>key;
    int s=0, e=n-1, m;
    while (s<=e)
    {
        m=(s+e)/2;
        if(a[m]==key){
            cout<<m<<endl;
            return 0;
        }
        else if(a[s]<a[m]){
            if(key>a[s] and key<a[m] )
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
            
        }
        else{
            if(key>a[m] and key<a[s]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        

    }
    cout<<"Na hai"<<endl;
    

}