#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define MAX 1000003
using namespace std;
// using pi = pair<ll, ll>;


ll unary(string s){
    map<char,ll > table; 
    table['>'] = 8;      table['+'] = 10;
    table['-'] = 11;      table['.'] = 12;
    table['<'] = 9;      table[','] = 13;
    table['['] = 14;      table[']'] = 15;
   
    ll size=0;
    for(ll i=0; s[i] != '\0' ; i++){
        size*=16;
        size=size%MAX;
        size+=table[s[i]];
        size=size%MAX;
    }
    return size;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll ans =unary(s);
    cout <<ans<<endl;
}