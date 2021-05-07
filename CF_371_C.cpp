#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b;

    cin >> a >> b;

    int gcd = __gcd(a, b);
    // cout<<gcd;
    int t1=a/gcd, t2=b/gcd;
    int cnt=0;
    int pfs[3]={2, 3, 5};
    
    for (int i = 0; i < 3; i++)
    {
        while(t1%pfs[i]==0){
                cnt++;
                t1/=pfs[i];
        }
        
    }
        for (int i = 0; i < 3; i++)
    {
        while(t2%pfs[i]==0){
                cnt++;
                t2/=pfs[i];
        }
        
    }

    if(t1!=1 or t2!=1)
        cnt=-1;
    cout<<cnt;
    

}