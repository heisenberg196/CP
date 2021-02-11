#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int a, x, y;
    cin>>a>>x>>y;

    if(y%a==0){
        cout<<-1;
        return 0;
    }
    if(y<a ){
        if(abs(x)>=abs(a/2.0))
        cout<<-1;
        else
        cout<<1;
        return 0;
    }
    int line=y/a;
    
    line++;
    // cout<<line;
    if(line%2==0){
    
        if(abs(x)<abs(a/2.0)){
            int i=0, cnt=1;
            for ( i = 2; i <= line; i++)
            {
                if(i%2==0){
                    cnt++;
                }
                else{
                    cnt+=2;
                }
            }
            
            cout<<cnt;
        }
        else{
            cout<<-1;
        }
    }
    else{
        // cout<<"here";
        if(abs(x)>=abs(a)){
            cout<<-1;
            return 0;
        }
        int i=0, cnt=1;
            for ( i = 2; i <= line; i++)
            {
                if(i%2==1){
                    cnt++;
                }
                else{
                    cnt+=2;
                }
            }
        if(x<a and x>0){
            cout<<cnt;
        }
        else if (x<0 and abs(x)<abs(a))
        {
            cout<<--cnt;
        }
        else{
            cout<<-1;
        }
        
    }

}