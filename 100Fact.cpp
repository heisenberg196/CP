#include <bits/stdc++.h>
using namespace std;

int multiply(int num, int fact[], int fsize)
{

    int carry = 0;
   
       
        for (int j = 0; j < fsize; j++)
        {
            int prod;
            prod = num * (fact[j]) + carry;
            // cout<<prod<<endl;
            carry = prod / 10;
            fact[j] = prod%10;
        }
            
    
    while (carry) 
    { 
        fact[fsize] = carry%10; 
        carry = carry/10; 
        fsize++; 
    } 
    return fsize;
}

int main()
{
    int n;
    cin >> n;
    int fact[1000];
    fact[0] = 1;
    int fsize = 1;
    for (int i = 2; i <= n; i++)
    {

        fsize = multiply(i, fact, fsize);
    }
        for (int i=fsize-1; i>=0; i--) 
        cout << fact[i];
}