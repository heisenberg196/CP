#include <bits/stdc++.h>
using namespace std;

void bb(int n1,int n2, string s){
    if(n1==0 && n2==0){
        // for (int st = i; st >0 ; st--)
        // {
        //     s+=")";
        // }
        
        
        cout<<s<<endl;
        return;
    }
    else{
 
        if(n1>0 && n2>0)
        {
		string str1 = s+"(";
        string str2 = s+")";

        // --n;
		if(n1<n2)
        bb(n1, n2-1, str2);
        bb(n1-1,n2, str1);
		
		}

		else if(n1==0 && n2>0)
        {
		// string str1 = s+"(";
        string str2 = s+")";

        // bb(--n1,n2, str1);
        bb(n1, n2-1, str2);
		}
		else if(n1>0 && n2==0)
        {
		string str1 = s+"(";
        // string str2 = s+")";

        bb(n1-1,n2, str1);
        // bb(n1, --n2, str2);
		}
		

    }
    
}

int main()
{
    int n;
    cout<<"ENter n";
    cin>>n;
    bb(n, n, "");
}