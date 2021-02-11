#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin.getline(s, 100);
    char *ptr;
    ptr =strtok(s, " ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
    ptr =strtok(NULL, " ");

    cout<<ptr<<endl;

    }

}
