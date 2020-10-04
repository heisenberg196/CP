#include <bits/stdc++.h>
using namespace std;

// int power(int x, int n){
//     if(n==0)
//         return 1;
//     if(n==1)
//         return x;
//     if(n%2==0){
//         return power(((x*x)%10), n/2);
//     }
//     else {
//         return x*(power(((x*x)%10), (n-1)/2));
//     }
// }

int main()
{
    int n, anss[] = {8, 4, 2, 6};
    cin >> n;
  
    n;
    if (n == 0)
       { cout << "1" << endl;
       return 0;
       }
    else 
    cout<<anss[(n-1)%4];
    //  else if (ans == 1)
    //    { cout << "8" << endl;
    //    return 0;
    //    }
    // ans = ans%4;
    // cout<<ans<<endl;
    // if (ans == 0)
    //     cout << "6" << endl;
    
    // else if (ans == 1)
    //     cout << "8" << endl;
    // else if (ans == 2)
    //     cout << "4" << endl;
    // else if (ans == 3)
    //     cout << "2" << endl;
   
    return 0;
}