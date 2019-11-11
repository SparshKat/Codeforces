#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string cal(vector<char> v){
    // ll ans =0 ;
    string s="";
    for(ll i=0;i<v.size();i++){
        // ans=(ans*10)+v[i];
        s+=v[i];
    }
    return s;
}

string great(string n){
    vector<char> v;
    // queue<ll> q;
    bool c=0;
    for(ll i=0;n[i]!='\0';i++){
        ll temp = n[i];
        if(temp%2==0) c=1;
        v.push_back(temp);
    }
    if(c==0) return "-1";
    ll size = v.size();
    for(ll i=0;i<size;i++){
        if(v[i]%2==0 && v[size-1]>v[i]){
            swap(v[size-1],v[i]);
            return cal(v);
        }
    }
    for(ll i=size-1;i>=0;i--){
        if(v[i]%2==0 && v[size-1]<v[i]){
            swap(v[size-1],v[i]);
            return cal(v);
        }
    }
    return cal(v);
}

int main(){
    string n;
    cin>>n;
    string ans = great(n);
    cout << ans <<endl;
}