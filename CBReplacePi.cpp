#include<bits/stdc++.h>
using namespace std;

void repPi(char a[], int i){

if(a[i]=='\0' || a[i+1]=='\0'){
    cout<<a<<endl;
    return ;
}
int j=0;
if(a[i]=='p' || a[i+1]=='i'){
     j=i+2;
     while (a[j]!='\0')  
{
    j++;
}
while (j>=i+2)
{
    a[j+2]=a[j];
    j--;
}
a[i]='3';
a[i+1]='.';
a[i+2]='1';
a[i+3]='4';
repPi(a, i+4);
}
else
repPi(a, i+1);


}


int main()
{
    char a[1000];
    cin>>a;
    repPi(a, 0);
}