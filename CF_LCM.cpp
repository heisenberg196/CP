#include <bits/stdc++.h>
using namespace std;


void factorize(int num, int p[30]){
    int count=0;
    for(int i=2; i<sqrt(num); ){

        while(num%i==0){
            p[count++]=i;
            
        }
        if(i%2==0){
            ++i;
        }
        else{
            i+=2;
        }
    }
}

int main(){
    int n;
    cout<<"hello";
    cin>>n;
    while(n--){

        int a, b, p[30];
        cin>>a>>b;
        
        for(int i=a; i<b; i++){
            // factorize(i, p);
            int c=0;
            while(p[c]!=0 && c<30){
                cout<<p[c];
            }
        }
    }
return 0;
}