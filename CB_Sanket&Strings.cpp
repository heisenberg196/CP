#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    getline(cin, str);
    
    char c=str[0];
    vector<int> a;
    int t=1;
    for (int i = 1; i < str.length(); i++)
    {
        if(str[i]==c){
            t++;
        }
        else{
            c=str[i];
            a.push_back(t);
            t=1;
        }
    }
    int maximum=0, t_max=0;
    for (int i = 0; i < a.size(); i++)
    {
        int tn = n;
        for(int j=i+1; i<a.size(); j++){
            if(tn)
            maximum = max(maximum, min(a[j], tn));
            else
            break;
        }
        

    }
    

    

}