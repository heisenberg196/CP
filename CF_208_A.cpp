#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[200];
    
    cin>>s;
    cout<<s;
    char *song = strtok(s, "WUB");
    // int x=0, y=0, c=0;
    // char k=-1;
    // for(int i=0; i<s.size()-2; i++){
    //     if(s.substr(i, 3)==t){
    //         i+=2;
    //         k='0';
            
    //         // if(k=='0'){
    //         //     cout<<" ";
    //         // }
    //         // cout<<i<<endl;
    //         if(c==0){
    //             y++;
    //             c++;
    //         }
    //     }
    //     else{
    //         k=s[i];
    //         // cout<<s[i];
    //     song[y]+=s[i];
    //     c=0;
    //     }
    // }
    // // cout<<y;
    // int i=0;
    // if(s.substr(0, 3)==t){
    //     i++;
    // }
    // for(int i=0; i<y; i++){
    //     cout<<song[i]<<" ";
    // }
     while (song != NULL) 
    { 
        printf("%s\n", song); 
        song = strtok(NULL, "-"); 
    } 
}