#include <bits/stdc++.h>

using namespace std;

void prtnum(int n, int div=10){
    if(n==0)
    return;
    
    prtnum(n/10);
    if(n%10==1)
    cout<<"one ";
    else if(n%10==2)
    cout<<"two ";
        else if(n%10==3)
    cout<<"three ";
        else if(n%10==4)
    cout<<"four ";
        else if(n%10==5)
    cout<<"five ";
        else if(n%10==6)
    cout<<"six ";
        else if(n%10==7)
    cout<<"seven ";
        else if(n%10==8)
    cout<<"eight ";
        else if(n%10==9)
    cout<<"nine ";
        else if(n%10==0)
    cout<<"zero ";
    
}
int main(){
    int n;
    cout<<"enter a num";
    cin>>n;
    prtnum(n);
}