#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int m, n;
    cin >> m >> n;
    int b[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    set<int> rows, cols;
    int ans[m][n] = {0};
        for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            ans[i][j]=0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 1)
            {
                bool rt = true, ct = true;

                if (rows.find(i) == rows.end())
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (b[i][k] == 0)
                        {
                            rt = false;
                            // cout<<"break at "<<i<<" "<<k<<endl;
                            break;
                        }
                        else 
                        continue;
                    }
                     if (rt==true)
                    rows.insert(i);
                }
                if (cols.find(i) == cols.end())
                {
                    for (int k = 0; k < m; k++)
                    {
                        if (b[k][j] == 0)
                        {
                            // cout<<"break at "<<k<<" "<<j<<endl;

                            ct = false;
                            break;
                        }
                        else 
                        continue;
                    }
                      if (ct==true)
                    cols.insert(j);
                }
               
              
                if (!(rt  or ct))
                {
                    cout << "NO";
                    return 0;
                }
                if(rows.find(i)!=rows.end() and cols.find(j)!=cols.end()){
                    ans[i][j]=1;
                }
            }
        }
    }

    // for (auto x : rows)
    // {
    //     cout<<x<<" ";
    // }
    
    // set<int>::iterator x, y;
    // for ( x = rows.begin(),  y = cols.begin(); x!=rows.end() and y!=cols.end(); x++, y++)
    // {
    //         // cout<<*x<<" "<<*y<<" ";
    //         ans[*x][*y] = 1;
    // }
    if(rows.size()==0 or cols.size()==0){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    } 
}