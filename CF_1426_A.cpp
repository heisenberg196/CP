#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        cin>>n>>x;
        if(n==1 || n==2)
            {cout<<1<<endl;
            continue;}
        n-=2;
        int ans = (n/x);
        if(n%x)
        ans+=2;
        else
        {
            ++ans;
        }
        
        cout<<ans<<endl;
    }
    
}