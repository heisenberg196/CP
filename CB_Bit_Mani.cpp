#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int x = -1<<2;
//     cout<<x<<endl;
// }

// Unique II

// int main(){
//     int n, t;
//     cin>>n;
//     int a[n];
//     int x = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         x = x^a[i];
//     }
//     x=x^1;
//     int tx=x, msb=0;
//     while( tx){
//         if(tx&1)
//         break;
//         tx=tx>>1;
//         msb++;
//     }
//     int fn=0;
//     tx = 1<<msb;
//     for (int i = 0; i < n; i++)
//     {
//         if(tx&a[i])
//         {
//             fn=a[i];
//             break;
//         }
//     }
//     int sn = fn^x;
//     cout<<min(sn, fn)<<" "<<max(sn, fn)<<endl;
    
    
// }

// C++ program to find the element 
// that occur only once 
#include <bits/stdc++.h> 
using namespace std; 

// int getSingle(int arr[], int n) 
// { 
// 	int ones = 0, twos = 0; 

// 	int common_bit_mask; 

// 	for (int i = 0; i < n; i++) { 
// 		twos = twos | (ones & arr[i]); 

// 		ones = ones ^ arr[i]; 
// 		common_bit_mask = ~(ones & twos); 
// 		ones &= common_bit_mask; 
// 		twos &= common_bit_mask; 

// 	} 

// 	return ones; 
// } 

// int main() 
// { 
//     int n, t;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
// 	cout << getSingle(a, n); 
// 	return 0; 
// } 

// CB HULK
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int ones =0 ;
//         while(n){
//             if(n&1)
//             ones++;
//             n=n>>1;
//         }
//         cout<<ones<<endl;
//     }
    
//     return 0;
// }

// Power

int main(){
    int x, p;
    cin>>x>>p;
    int multi = x;
    int ans=1, b=1;
    while(p){
        if(p&1){
            ans*=x;
        }
        x*=x;
        p=p>>1;
    }
    cout<<ans;

}