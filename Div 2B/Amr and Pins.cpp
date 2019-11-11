#include<iostream>
#include<bits/stdc++.h>
#define ll double
using namespace std;

ll graph(ll r,ll x,ll x1,ll y,ll y1){
    ll ans=0;
    ll dist = sqrt(pow((x1-x),2) + pow((y1-y),2));
    return ceil(dist/(2*r));
    return ans;
}

int main(){
    ll r,x,x1,y,y1;
    cin>>r>>x>>y>>x1>>y1;
    ll ans= graph(r,x,x1,y,y1);
    cout << ans<<endl;
}