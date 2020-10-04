#include <bits/stdc++.h>
using namespace std;

char word[] = "IEHOVA#";
void bfs(char *a, int i, int j, int ex, int ey, int n, int m, int c = 0)
{
    if (c > 6)
        return;
    if((*((a+i*n)+j))=='#'){
        return;
    }
    // cout<<"here";
    // int X[] = {1, -1};
    // int Y[] = {1, -1};
        // if((*((a+i*n+1)+j))){
        //     if((*((a+i*n+1)+j))==word[c]){
            
        //     bfs(a, i + 1, j, ex, ey, n, m, ++c);
        //     }
        // }
       
        if(a[i*m+j+1] && ((a[i*m+j+1]) == word[c])){
            
            cout<<"right ";

            bfs(a, i, j + 1, ex, ey, n, m, ++c);
            
        }
         else  if(a[(i-1)*m+j] && ((a[(i-1)*m+j])==word[c])){

        
                cout<<"forth ";

                bfs(a, i-1, j, ex, ey, n, m, ++c);
            
        }
        else  if(a[i*m+j-1] && ((a[i*m+j-1])==word[c])){
            
            
                cout<<"left ";

                bfs(a, i, j - 1, ex, ey, n, m, ++c);
        
        }
}

int main()
{
    int t, n, m;
    int sx, sy, ex, ey;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        char a[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    sx = j;
                    sy = i;
                }
                if (a[i][j] == '#')
                {
                    ex = j;
                    ey = i;
                }
            }
        }

        bfs((&a[0][0]), sy, sx, ex, ey, n, m);
        cout<<endl;
    }
}