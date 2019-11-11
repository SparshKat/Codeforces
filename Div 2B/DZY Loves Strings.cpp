#include<iostream>
// #include<vector>
// #include<map>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// mmzhr
// 3
// 443 497 867 471 195 670 453 413 579 466 553 881 847 642 269 996 666 702 487 209 257 741 974 133 519 453

ll cal(vector<ll> v){
    ll ans=0;
    for(ll i=0;i<v.size();i++){
        ans+= (v[i]*(i+1));
    }
    return ans;
}
ll funString(string num, ll k){
    vector<ll> temp,v;
    map<char,ll> dict;
    for(ll i=0;i<26;i++){
        ll val ; 
        cin >> val;
        dict.insert({char(97+i), val});
        temp.push_back(val);
    }
    // for(auto i:dict){
    //     cout <<i.first <<"->" << i.second<<endl;
    // }
    for(ll i=0;i<num.length(); i++){
        char ch = num[i];
        // ll val = (ch-'0')-49;
        // cout << val <<endl;
        v.push_back(dict[ch]);
    }
    // sort(v.begin(),v.end());
    sort(temp.begin(),temp.end(), greater<ll>());
    for(ll i=0;i<k; i++){
        v.push_back(temp[0]);
    }
    return cal(v);
   
}

int main(){
    string n;
    ll k;
    cin >> n >> k;
    ll ans = funString(n,k);
    cout << ans <<endl;
}