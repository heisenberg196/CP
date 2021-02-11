#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<int> leftheap;
        priority_queue<int, vector<int>, greater<int>> rightheap;
        
        int in ;
        cin>>in;
        int med;
        med = in;
        leftheap.push(in);
        cout<<med<<endl;
        cin>>in;
        while(in != -1){
            if(rightheap.size() < leftheap.size()){
                if(in<med){
                    rightheap.push(leftheap.top());
                    leftheap.pop();
                    leftheap.push(in);
                }
                else{
                    rightheap.push(in);
                }
                    med = (leftheap.top() + rightheap.top())/2;
            }

            else if(rightheap.size() == leftheap.size()){
                if(in<med){
                    leftheap.push(in);
                    med = leftheap.top();
                }
                else{
                    rightheap.push(in);
                    med = rightheap.top();
                }
            }
            else{
                if(in>med){
                    leftheap.push(rightheap.top());
                    rightheap.pop();
                    rightheap.push(in);
                }
                else{
                    leftheap.push(in);
                }
                    med = (leftheap.top() + rightheap.top())/2;
            }
                  cout<<med<<" ";
        cin>>in;
        }  
  

    }
}