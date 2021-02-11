#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int n, c=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='b')
            {
                char t = s[i];
                s[i] = s[c];
                s[c]=t;
                c++;
            }

        }
        cout<<s<<endl;
        

    }
    


}