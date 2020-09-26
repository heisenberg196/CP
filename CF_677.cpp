#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k, count=0;
    cin>>n;
    int a[n];
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<=k)
            count++;
        else
        {
            count+=2;
        }
        

    }
    cout<<count;
    return 0;
}
