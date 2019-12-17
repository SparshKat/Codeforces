#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
using namespace std;

//g++ --std=c++11 cf.cpp -o test

ll sequences(ll x, ll y, ll n){
    ll arr[] = {x,y,y-x,-x,-y,x-y};
    return ( ( arr[ (n-1) % 6] % MOD +MOD )%MOD );
    
}
 
 
int main(){
    ll x,y,n;
    cin >> x>>y>> n;
    ll ans = sequences(x,y,n);
    cout << ans<<endl;
}