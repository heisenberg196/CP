    #include<bits/stdc++.h>
    using namespace std;



    int main()
    {
        
       int n, m, key;
       cin>>n>>m;
       int a[n][m];
       for (int i = 0; i < n; i++)
           for (int j = 0; j < m; j++)
               cin>>a[i][j];

        
        int i=0, j=m-1;
        cin>>key;
        while(i<n and j>=0){
            if(a[i][j]==key){
                cout<<"1";
                return 0;
            }
            else if(a[i][j]>key){
                j--;
            }
            else{
                i++;
            }
        }
        cout<<"0";
        
                    
       
          
    }