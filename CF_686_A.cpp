#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, cd=0;
    long long int ic=0;
    cin>>n>>ic;
    char s;
    while (n--)
    {
        cin>>s>>d;
        if(s=='+')
            ic+=d;
        else if(s=='-'){
            if(d>ic){
                cd++;
                continue;
            }
            else{
                ic-=d;
            }
        }    
    }
    cout<<ic<<" "<<cd;
    
}