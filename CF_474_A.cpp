#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, pair<char, char>> l;
    l['a']=make_pair('a', 's');
    l['b']=make_pair('v', 'n');
    l['c']=make_pair('x', 'v');
    l['d']=make_pair('s', 'f');
    l['e']=make_pair('w', 'r');
    l['f']=make_pair('d', 'g');
    l['g']=make_pair('f', 'h');
    l['h']=make_pair('g', 'j');
    l['i']=make_pair('u', 'o');
    l['j']=make_pair('h', 'k');
    l['k']=make_pair('j', 'l');
    l['l']=make_pair('k', 'l');
    l['m']=make_pair('n', 'm');
    l['n']=make_pair('b', 'm');
    l['o']=make_pair('i', 'p');
    l['p']=make_pair('o', 'p');
    l['q']=make_pair('q', 'w');
    l['r']=make_pair('e', 't');
    l['s']=make_pair('a', 'd');
    l['t']=make_pair('r', 'y');
    l['u']=make_pair('y', 'i');
    l['v']=make_pair('c', 'b');
    l['w']=make_pair('q', 'e');
    l['x']=make_pair('z', 'c');
    l['y']=make_pair('t', 'u');
    l['z']=make_pair('z', 'x');
    l[';']=make_pair('l', ';');
    l[',']=make_pair('m', '.');
    l['.']=make_pair(',', '/');
    l['/']=make_pair('.', '/');
    char a;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(a=='R'){
            cout<<l[s[i]].first;
        }
        else{
            cout<<l[s[i]].second;
        }
    }
    cout<<endl;
    return 0;
}