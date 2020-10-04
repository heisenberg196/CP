#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int b[27]={0};

    cin>>n;
    // char a[n][100];
    for (int i = 0; i < n; i++)
    {
        string a;
        cin>>a;

        for(int j=0; a[j]!='\0'; j++){
            ++b[a[j]-'A'];
        }
    }
    int  mp=-1, mv=-1;
    for (int i = 0; i < 26; i++)
    {
        if(b[i]>mv)
           { mp=i;
           mv=b[i];}

    }
    // cout<<"hello";
    
    // cout<<mp;
    bool tie = true;
    for (int i = 0; i <26; i++)
    {
        if(b[i]>1){
            tie=false;
            break;
            }
    }
for (int i = 0; i < 26; i++)
{
    cout<<b[i];
}
cout<<tie;
    if(tie)
    {for (int i = 0; i < 26; i++)
    {
        if(b[i]==1)
            cout<<char(i+'A');
    }
    return 0 ;
    }
    
    cout<<char(mp+'A');
    
    
}