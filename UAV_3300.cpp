#include <bits/stdc++.h>
using namespace std;

bool ly(int x){
    if(x%400==0)
        return true;

    if(x%100==0)
        return false;

    if(x%4==0)
        return true;

    return false;
}

int main(){
    int n;
    cin>>n;
 
    int a[n][4];
//     = {
//         {29, 12, 2004, 90},
// {31, 12, 2004, 100},
// {1, 1, 2005, 101},
// {2, 1, 2005, 109},
//     }; 
    // = {{9, 9, 1979, 440}, {29, 10, 1979, 458}, {30, 10, 1979, 470}, {1 ,11 ,1979 ,480}, {2 ,11 ,1979 ,483}};
    int c=0, d=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n-1; i++){
        int m;
        if(a[i][1]==1 || a[i][1]==3 || a[i][1]==5 || a[i][1]==7 || a[i][1]==8 ||  a[i][1]==10 || a[i][1]==11 || a[i][1]==12)
            m=31;
        else if(a[i][1]==2){
            ly(a[i][2]) ? m=29 : m=28;
        }
        else 
            m=30;
        if(a[i][0]+1==a[i+1][0]){
                // cout<<"abc";

            if(a[i][1]==a[i+1][1]){
                // cout<<"abcd";

                if(a[i][2]==a[i+1][2]){
                // cout<<"abce";

                c+=a[i+1][3]-a[i][3];
                d++;
                }
            }
        }
        else if((a[i][0]+a[i+1][0])%m==1){
                // cout<<"bc";

             if(a[i][1]+1==a[i+1][1]){
                // cout<<"c";

                if(a[i][2]==a[i+1][2]){
                    d++;
                    c+=a[i+1][3]-a[i][3];}
                
            }
            else if(a[i][1]==12 && a[i+1][1]==1){
                // cout<<"cba";

                if(a[i][2]+1==a[i+1][2]){
                    d++;
                    c+=a[i+1][3]-a[i][3];}
                }
        }
    
       
    }

    cout<<d<<" "<<c<<endl;

}