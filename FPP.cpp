#include <bits/stdc++.h>
using namespace std;


int sol(int n){

    if(n<3)
        return 1;
    else
    {
        return sol(n-1)+ (n-1)*sol(n-2)+1;
    }
    
}

int main(){
    int n;
    cin>>n;
    cout<<sol(n);
}