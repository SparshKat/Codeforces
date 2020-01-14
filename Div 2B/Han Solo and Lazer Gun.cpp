#include <iostream>
#include <bits/stdc++.h>
#define ll long double
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define MAX 1000003
using namespace std;
using pi = pair<ll, ll>;

void hans(ll n,ll x0,ll y0){
    set<pi> s;
    set<ll> temp;
    for(ll i=0;i<n;i++){
        ll x1,y1;
        cin>>x1>>y1;
        s.insert({x1,y1});
    }
    ll ans=0,y=0,x=0;
    for(auto i : s){
        ll x1 = i.first , y1 = i.second;
        if(x1-x0 == 0){
            temp.insert(LLONG_MAX);
            continue;
        } 
        ll m = (y1-y0)/(x1-x0);
        temp.insert(m);
    }
    cout << temp.size() <<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, x0,y0;
    cin>> n>>x0>>y0;
    hans(n,x0,y0);
}