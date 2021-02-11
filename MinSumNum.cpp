#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    getline(cin, A) ;
    // cout << A;
    char lc = '.';
    int lcp=-1;
    int min =  INT_MAX;
    for ( int i = 0; i < A.size(); i++)
    {
        if(A[i]=='x' || A[i]=='o'){
            lcp = i;
            lc=A[i];
            break;
        }
    }
    
    for(int i=lcp; i<A.size(); i++){
       
        if(A[i]=='.'){
            continue;
        }
        else if(A[i]==lc)
        {

            lcp=i;
        }
        else if((A[i]=='x' && lc=='o') || (A[i]=='o' && lc=='x'))
        {
            if(abs(i-lcp)<min){
                min==abs(i-lcp);
            }
            lc=A[i];
            lcp=i;
        }
    
        
        
    }
    if(min==INT_MAX){
        cout<<-1;
    }
    else
    cout<<min;
}