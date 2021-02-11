#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, x, mid, ans;
        cin >> n >> k;
        long long int l = 1, r = n;
        while(l<=r){
         mid = (l+r)/2;

            if(pow(mid, k) <= n)

            {    
                ans=mid;
                l = mid+1;

           }
            else{
                r=mid-1;
            }
            cout<<mid<<endl;
        }   
           cout<<ans<<endl;
    }
}
