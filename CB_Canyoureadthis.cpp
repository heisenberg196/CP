#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    cout<<str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if(str[i]>='A' and str[i]<='Z')
            cout<<endl;
        cout<<str[i];
    }
    
}