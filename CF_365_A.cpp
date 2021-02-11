#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k,count=0;
    cout<<"begin";
    cin>>n>>k;
    while (n--)
    {
        long long int no1, a[k+1]={0};
        memset(a, 0, k+1);
        bool ans=1;
        cin>>no1;
        long long int no2 = no1;
        while(no2>0){
            int d = no2%10;
            a[d]++;
            no2/=10;
        }
        for(int i=0; i<=k; i++){
            if(a[i]==0){
                ans=0;
                break;
        }
        }

        if(ans==1){
            count++;
        }

    }
    cout<<count;

}