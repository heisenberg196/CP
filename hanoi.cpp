#include <bits/stdc++.h>
using namespace std;

void han(int n, char src, char helper, char dest ){
    static int i=0;
    if(n==0){
        return;}
    han(n-1, src, dest, helper);
    cout<<n<<" shifted from "<<src<<" "<<dest<<endl;
    i++;
    han(n-1, helper, src, dest);
    cout<<i;
}

int main(){
    int n;
    cin>>n;
    han(n, 'A', 'B', 'C');
}