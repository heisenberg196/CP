#include <bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;
    int a[27]={0};
    for(int i=0; i<str.length(); i++){
        a[str[i]-'a'+1]++;

    }
    // if (str.length()==1){
    //     cout<<str;
    //     return 0;
    // }
    int max_pos=0, max=0;
    // for(int i=1; i<=26; i++){
    //     if(a[i]!=0)
    //   cout<<a[i];
    // }
    // cout<<endl;
    for(int i=1; i<=26; i++){
        if(max<a[i])
            {max_pos=i;
            max=a[i];
            }
    }
    // cout<<max_pos;
    char c = 'a'+max_pos-1;
    cout<<c;
    // int pos = &a[0]-max_element(a+1, a+27);
    // cout<<pos<<endl;
    // char ans = (pos+'a'-1);
    // cout<<ans;
}