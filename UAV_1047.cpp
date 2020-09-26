#include <bits/stdc++.h>
using namespace std;

int main(){
    string  x, y;
    vector<char> ans;
    cin>>x;
    cin>>y;

    stoi(y);

    int sy = y.size(), sx = x.size();
    vector<vector<char>> l(sy);

    for (int i = 0; i < sy; i++)
    {   
        
        int carry=0;

        int t1 = y[sy-i-1] - '0';
        for(int j=x.size()-1; j>=0; j--){  
            char t3;
            int t2 = x[j]-'0';                                     
            int x = t1*t2+carry;
            int b = x%10;
            t3=b+'0';
            carry=x/10;
            l[i].insert(l[i].begin(), t3);
        }
    }
    

    for(int i=0; i<sy; i++){
        for(int j=0; j<i; j++){
            l[i].push_back('0');
        }
    }


    for(int i=0; i<l.size(); i++){
    for(int j=0; j<l[i].size(); j++){
        cout<<l[i][j];}
        cout<<endl;
    }

    for(int i=0; i<l.size(); i++){
    for(int j=0; j<l[i].size(); j++){
        cout<<l[i][j];}
        cout<<endl;
    }


}