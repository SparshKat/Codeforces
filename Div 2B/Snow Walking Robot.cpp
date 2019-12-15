#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

//g++ --std=c++11 cf.cpp -o test

string fill(string str , ll temp1 , ll temp2){
    for(ll i=0;i<temp1;i++){
        str+='U';
    }
    for(ll i=0;i<temp2;i++){
        str+='R';
    }
    for(ll i=0;i<temp1;i++){
        str+='D';
    }
    for(ll i=0;i<temp2;i++){
        str+='L';
    }
    return str;
}

string robot(string str){
    map<char,ll> m;
    for(ll i=0;i<str.length();i++){
        char ch = str[i];
        m[ch]++;
    }
    string ans="";
    ll temp1=0 , temp2=0;
    if(m['U']>0 && m['D']>0){
        if( (m['L']==0 && m['R']==0) || (m['L']>0&&m['R']==0) || (m['L']==0&&m['R']>0) ){
            return ans+'U'+'D';
        }
        temp1 = min(m['U'] , m['D']);
        // ans = fill("",{'U','D'} , temp);
    }

    if(m['R']>0 && m['L']>0){
        if((m['U']==0 && m['D']==0) || (m['U']>0&&m['D']==0) || (m['U']==0&&m['D']>0)){
            return ans+'L'+'R';
        }
        temp2 = min(m['R'] , m['L']);
        // ans = fill(ans,{'R','L'} , temp);
    }
    ans = fill("" , temp1, temp2);
    return ans;
}

int main()
{
    ll q;
    cin>> q;
    while(q--){
        string str; cin >> str;
        string ans = robot(str);
        cout<< ans.length()<<endl;
        cout << ans <<endl;
    }
}