#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin>>a[i];

    int q;
    cin>>q;
    while(q--){
        int val, firstOcc=-1, lastOcc=-1;
        cin>>val;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==val)
{               lastOcc=i;
                if(!firstOcc)
                    firstOcc=i;
}        }

        cout<<firstOcc<<" "<<lastOcc<<endl;
        
    }    
}