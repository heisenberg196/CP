#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int helpbin(ll p, ll a){
//     ll s=0, e=a, mid;
//     ll ans=0;
//     while(s<e){
//         mid = (s+e)/2;
//         cout<<"h";

//         if((p/(mid*a) >= 1.0 )){
//             ans=mid;
//             s=mid+1;
//         }
//         else
//         {
//             e=mid-1;
//         }
        
//     }
//     return ans;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        ll p, a, b, c, t1, t2, t3, t4;
        cin>>p>>a>>b>>c;
        if(p%a==0 or p%b==0 or p%c==0){
            cout<<0<<endl;
            continue;
        }
        t1 = p/a;
        t2 = p/b;
        t3 = p/c;
        t1 = abs((t1+1)*a - p);
        t2 = abs((t2+1)*b - p);
        t3 = abs((t3+1)*c - p);
        cout<<min(t1, min(t2, t3))<<endl;
    }
}