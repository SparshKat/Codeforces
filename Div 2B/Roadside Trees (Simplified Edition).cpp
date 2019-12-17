#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
using namespace std;

//g++ --std=c++11 cf.cpp -o test

ll tree(ll n){
    vector<ll> v;
    for(ll i=0; i<n ;i++){
        ll temp; cin>>temp ;
        v.push_back(temp);
    }

    ll current_h = 0, ans=0;

    for(ll i=0; i<n ;i++){
        ans += v[i]-current_h;
        current_h = v[i];
        ans++;
        if(i==n-1) break;
        ans += (current_h  - min(v[i], v[i+1]));
        current_h = min(v[i],v[i+1]);
        ans++;
    }
    return ans;
}
 
 
int main(){
    ll n;
    cin>> n;
    ll ans = tree(n);
    cout << ans<<endl;
}