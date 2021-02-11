#include <bits/stdc++.h>
using namespace std;

void subSets(string s,string a, int i){
    if(i==s.length()){
        cout<<a<<endl;
        return;
    }
    // cout<<"blah";
    string str1 =a+s[i];
    i++;
    subSets(s, str1, i);
    subSets(s, a, i);

}

int main(){
    // cout<<"start";
    subSets("abc","", 0);
    // cout<<"end";

}