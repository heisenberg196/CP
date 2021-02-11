#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mcnt=0, mind=0;
    for (int i = 0; i < n; i++)
    {
        int cnt=1, flag1=1, flag2=1;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<=a[j-1] and flag1)
            cnt++;
            else
            flag1=0;
        }
        for (int j = i-1; j >=0; j--)
        {
            if(a[j]<=a[j+1] and j!=n-1 and flag2)
            cnt++;
            else
            flag2=0;
        }
        if(cnt>mcnt){
            // cout<<"a "<<a[i]<<" "<<cnt<<endl;
            mcnt=cnt;
            mind=i;
        }
        
    }
    cout<<mcnt;
    
}