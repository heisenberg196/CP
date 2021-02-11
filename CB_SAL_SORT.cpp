#include <bits/stdc++.h>
using namespace std;


typedef pair<string, int> emp;

bool comp(emp emp1, emp emp2){
    if(emp1.second<emp2.second)
        return false;
    else if(emp1.second>emp2.second)
        return true;
    else 
        return emp1.first<emp2.first;
    
}

int main(){
    int n, k;
    cin>>k>>n;
    vector<emp> empArr;

    for (int i = 0; i < n; i++)
    {
        string s;
        int sal;
        cin>>s>>sal;
        
        empArr.push_back(make_pair(s, sal));
    }

    sort(empArr.begin(), empArr.end(), comp);
    
    for (int i = 0; i < n; i++)
    {
        if(empArr[i].second>=k)
            cout<<empArr[i].first<<" "<<empArr[i].second<<endl;
        else
            break;            
        
    }
    
}