#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        long long int col[4];
        int tries=3;
        string ans="No";
        bool even;
        cin>>col[0]>>col[1]>>col[2]>>col[3];
        even = (col[0]+col[1]+col[2]+col[3])%2==0 ? true : false;
        
        
        do
        {
            int no_even=0;
            for (int i = 0; i < 4; i++)
        {
            if(col[i]%2==0){
                ++no_even;
            }
        }
                    if((even && no_even==4) || (!even && no_even==3)){
            ans="Yes";
            break;
        
        }
        col[0]-=1;
        col[1]-=1;
        col[2]-=1;
        col[3]+=3;
        } while (tries-- && (col[0]>=0 && col[1]>=0 && col[2]>=0 && col[3]>=0));
        
 
        
        
            cout<<ans<<endl;
        
        
        
    }
    
    return 0;
}