#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, i=1;
    cin>>a>>b;
    int c = a%10;
    while(true){
        if((c*i)%10==b || (c*i)%10==0 || i>=11)
        break;
        i++;
    }
    cout<<i;
} 