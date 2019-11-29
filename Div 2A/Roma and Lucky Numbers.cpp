#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countIt(string el){
    ll ans= 0; 
    for(ll i=0; i<el.size() ; i++){
        if(el[i]=='4' || el[i]=='7') ans++;
    }
    return ans;
}

void lucky(ll n, ll num){
    vector<string> v;
    for(ll i=0;i<n;i++){
        string temp ;
        cin>>temp;
        v.push_back(temp);
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll temp = countIt(v[i]);
        if(temp <= num) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ll n,x;
    cin>>n>>x;
    lucky(n,x);
}