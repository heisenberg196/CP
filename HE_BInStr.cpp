#include<bits/stdc++.h>
using namespace std;



int startFromFlag(string str, char f){
    long long int n=str.length();

    if(n==0 || n==1){
        return n;
    }

    long long int i=0;
    char flag=f;
    for( i=0; i<n; i++){
        if(str[i]==flag)
            break;
    }
    if(i<n){
    long long int j=i;
    while(j<n && n!=0   && str[j]!='\0'){
        if(str[j]==flag){
            str.erase(j, 1);
            
            if(flag=='0')
                flag='1';
            else
                flag='0';
        }
        else
            j++;
        
    }
    int s0=0, s1=1;
    for(int j=0; j<str.length(); j++){
        if(str[i]=='0'){
            s0++;
        }
        else
        s1++;
    }
    if(s0>s1)
        return startFromFlag(str, '0')+1;
    else
        return startFromFlag(str, '1')+1;
    
    // long long int m = min(startFromFlag(str, '0')+1, startFromFlag(str, '1')+1);
        // cout<<"min "<<m<<endl;
        // return m;
    }
        return str.length();

    
}


int solve(string str, long long int n){
    // cout<<"solving..."<<endl;
    if(n==0 || n==1){
        return n;
    }
    return min(startFromFlag(str, '0'), startFromFlag(str, '1'));

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string x;
        // cout<<"1"<<endl;

        cin>>x;
        cout<<solve(x, n);
    }
    return 0;
}