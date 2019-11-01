#include<iostream>
#include<vector>
#define ll long long
using namespace std;

void central(ll n){
    vector<pair<ll,ll>> v;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(ll i=0;i<n;i++){
        ll xi = (v[i]).first , yi = (v[i]).second;
        bool u,b,l,r;
        u=b=l=r=0;
        for(ll j=0;j<n;j++){
            ll xf = (v[j]).first , yf = (v[j]).second;
            if(xf==xi && yi<yf) u=1;
            if(xf==xi && yi>yf) b=1;
            if(yf==yi && xi<xf) l=1;
            if(yf==yi && xi>xf) r=1;
        }
        if(u && b && l && r) ans++;
    }
    cout <<ans<<endl;
}

int main(){
    ll n;
    cin>> n;
    central(n);
    return 0;
}