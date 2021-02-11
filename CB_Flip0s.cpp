#include <bits/stdc++.h>
using namespace std;


// int main(){
//     int n, k;
//     cin>>n>>k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin>>a[i];

//     int l=0 , r=0, zc=0, ans=0, mr, ml;
//     while(l<n and r<n)
//     {
//                 if(a[r]==0)
//             zc++;
//             while(zc>k){
//                 if(a[l]==0){
//                     zc--;
//                 }
//                 l++;
//             }
        
//         if(ans < (r-l+1)){
//             ans = (r-l+1);
//             mr = r;
//             ml = l;
//         }
//         // ans = max(ans, (r-l+1));
//         r++;

//     }
//     cout<<ans <<endl;

//     for (int i = ml; i <= mr; i++)
//         a[i]=1;

//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
    
    

// }

int longestSubSeg(int a[], int n, int k) 
{ 
    int cnt0 = 0; 
    int l = 0; 
    int max_len = 0, mr=0, ml=0; 
  
    // i decides current ending point 
    for (int i = 0; i < n; i++) { 
        if (a[i] == 0) 
            cnt0++; 
  
        // If there are more 0's move 
        // left point for current ending 
        // point. 
        while (cnt0 > k) { 
            if (a[l] == 0) 
                cnt0--; 
            l++; 
        } 
          if(max_len < (i-l+1)){
            max_len = (i-l+1);
            mr = i;
            ml = l;
        }
        max_len = max(max_len, i - l + 1); 
    } 

    for (int i = ml; i <= mr; i++)
        a[i]=1;
    cout<<max_len<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return max_len;
} 
  
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    longestSubSeg(a, n, k);
}