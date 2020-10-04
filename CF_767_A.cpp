#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0, k=0;
    cin>>n;
   int a[2*n]={0};
   for (int i = 0; i < n; i++)
   {
       int t;
       cin>>t;
       if(i==0)
        {  
            a[j]=t;
            j++;
            // continue;
        }
        else if(t>=a[j]){
            a[j]=t;
            j++;

        }
        else if(t<a[j-1]){
            // ++j;

            a[j]=0;
            j+=1;
            a[j]=t;
            ++j;

        }

   }
   for (int i = 0; i <= j; i++)
   {
       cout<<a[i]<<" ";
   }
   
   
    return 0;
}
