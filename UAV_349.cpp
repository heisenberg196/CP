#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main(){
    int a;
    while(cin>>a){
        int b;
        cin>>b;
        
        int c = gcd(a, b);
        if(c==1){
            cout<<"Good Choice"<<endl;
        }
        else
            cout<<"Bad Choice"<<endl;

    
    }
}