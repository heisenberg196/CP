#include <bits/stdc++.h>
using namespace std;

void ss(string str, int s, int e){
    if(s>=e)
        return;
    else{
        for (int i = s; i < e; i++)
        {
            cout<<str[i];
        }
        cout<<endl;
    ss(str, s+1, e );
    ss(str, s, e-1 );


        
    }
}

int main(){
    string s = "abcde";
    
    ss(s, 0, s.length());
}