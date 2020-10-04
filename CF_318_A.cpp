#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n, k;
    cin>>n>>k;
    if(n%2==0)
        n/=2;
    else
    {
            n=(n/2)+1;
    }
    // cout<<n<<endl;
    
    if(k<=n){
        cout<<(k*2 - 1);

    }
    else{
        long long k2 = k-n;
        if(k%2==0)
        cout<<k*2;
        else
        {
            cout<<k2*2<<endl;
        }
        
    }
}


// #include <iostream>

// using namespace std;

// int main()
// {
//     long long n, k;
//     cin >> n >> k;
//     if (k <= (n + 1) / 2)
//     {
//         cout << k * 2 - 1 << endl;
//     }
//     else
//     {
//         cout << (k - (n + 1) / 2) * 2 << endl;
//     }
//     return 0;
// }