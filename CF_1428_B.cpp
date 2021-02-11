#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, tc = 0, fc = 0, dir = 0;

        cin >> n;
        char dirs[n];

        for (int i = 0; i < n; i++)
            cin >> dirs[i];

        if (dirs[0] == '>')
            dir = 1;
        if (dirs[0] == '<')
            dir = -1;
        tc++;
        for (int i = 0; i < n; i++)
        {
            if (dirs[i] == '-')
            {
                fc += 2;
                if (dirs[i+1] == '>')
                    dir = 1;
                else if (dirs[i+1] == '<')
                    dir = -1;
                else if (dirs[i+1] == '<')
                    dir = -1;
                if(dirs[(i+1)&n]=='-')
                    fc--;
                i++;
            }
            else if (dirs[i] == '>')
            {
                tc++;

                if (dir == -1)
                    tc = 0;
                dir = 1;
            }
            else if (dirs[i] == '<')
            {
                tc++;

                if (dir == 1)
                    tc = 0;
                dir = -1;
            }
        }
        cout << fc + tc << endl;
    }
}