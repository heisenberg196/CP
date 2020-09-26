#include <bits/stdc++.h>
using namespace std;

long long int gcd(int a, int b){
    if (a==0)
    return b;
    return gcd(b%a, a);
}

long long int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int main(){
    long long int n, m, a, d, C, c1, c2, c3, c4;
    cin>>n>>m>>a>>d;
    c1 = (m/a)-((n-1)/a);
    c2 = (m/(a+d))-((n-1)/(a+d));
    c3 = (m/(a+(2*d)))-((n-1)/(a+(2*d)));
    c4 = (m/(a+(3*d)))-((n-1)/(a+(3*d)));
    cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;

    long long int c12 =lcm(a, (a+d)); 
    c12 = (m/c12)-((n-1)/c12);
    
    long long int c23 =lcm(a+d, (a+(2*d)));
    c23 = (m/c23)-((n-1)/c23);

    long long int c34 =lcm((a+(2*d)), (a+(3*d))); 
    c34 = (m/c34)-((n-1)/c34);

    long long int c41 =lcm((a+(3*d)), a); 
    c41 = (m/c41)-((n-1)/c41);

    long long int c13 =lcm(a, (a+(2*d))); 
    c13 = (m/c13)-((n-1)/c13);

    long long int c24 =lcm((a+d), (a+(3*d))); 
    c24 = (m/c24)-((n-1)/c24);
    cout<<c12<<" "<<c23<<" "<<c34<<" "<<c41<<" "<<c13<<" "<<c24<<endl;


    long long int c123 =lcm(lcm(a, (a+d)), (a+(2*d))); 
    c123 = (m/c123)-((n-1)/c123);

    long long int c234 =lcm(lcm(a+d, (a+(2*d))), (a+(3*d))); 
    c234 = (m/c234)-((n-1)/c234);

    long long int c341 = lcm(lcm((a+(2*d)), (a+(3*d))), a);
    c341 = (m/c341)-((n-1)/c341);

    long long int c412 =lcm(lcm((a+(3*d)), a), (a+d));
    c412 = (m/c12)-((n-1)/c412);

    long long int c1234 =lcm(lcm(lcm(a, (a+d)), (a+(2*d))), (a+3*d)); 
    c1234 = (m/c1234)-((n-1)/c1234);
    cout<<c123<<" "<<c234<<" "<<c341<<" "<<c412<<" "<<c1234<<endl;

    C = c1 + c2 + c3 + c4 - (c12 + c13 + c41 + c23 + c24 + c34) + c123 + c234 + c341 + c412 - c1234;
    cout<<C<<endl;
    
}