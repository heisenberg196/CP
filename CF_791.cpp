#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, i=0;
    cin>>a>>b;
    while (true)
    {   i++;
        a*=3;
        b*=2;
        if(b<a)
        break;
    }
    
    cout<<i;
    return 0;
}