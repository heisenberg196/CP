#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0, sum1=0, c=0;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    sort(a, a+n);
    for(int i=n-1; i>=0; i--){
        if(sum1>sum/2)
            break;
        sum1+=a[i];
        c++;
    }
    cout<<c<<endl;

}