#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100], n, k, max=-1, max2=-1, max3=-1, mp=-1;
    cout<<" N : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"k ";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max3=max2;
            
            max2=max;
            max = a[i];
            mp=i;
        }
        if(i>=k-1){
            if(mp>=i-(k-1)){
            cout<<max;}
            else{
                cout<<max2;
                max=max2;
            }
        }
        }
    }
