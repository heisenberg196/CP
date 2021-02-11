#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < 1; i++)
    {
        if (str[i] >= 97 and str[i] <= 122)
        {
            cout << "lowercase";
        }
        else if (str[i] >= 65 and str[i] <= 90)
            cout << "UPPERCASE";

        else
        {
            cout << "Invalid" << endl;
            return 0;
        }
    }
}