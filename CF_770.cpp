#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    char p[a];

    for(int i=0, j=0; i<a; i++, j++){
        p[i]=j+97;

        if(j==b-1)
        j=-1;
    }
    for (int i = 0; i < a; i++)
    {
        cout<<p[i];
    }
    
    
}


// 14 0 15 10 10
// 14 12 0 12 10
// 26 0 0 12 10
// 0 13 0 12 10
//0 13 5 0 14