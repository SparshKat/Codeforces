#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll inc(ll maxAns , vector<ll> v1, ll n){
    ll ans =0;
    for(ll i=0;i<n;i++)
    {
        if(maxAns >= 2*v1[i]) ans++;
    }
    return ans;
}

ll tl(ll n, ll m){
    vector<ll> v1, v2;
    for(ll i=0;i<n;i++)
    {
        ll temp; cin>>temp;
        v1.push_back(temp);
    }
    for(ll i=0;i<m;i++)
    {
        ll temp; cin>>temp;
        v2.push_back(temp);
    }

    sort(v1.begin(),v1.end(), greater<ll>() );
    sort(v2.begin(),v2.end());

    ll maxAns = v1[0];
    ll minAns = v2[0];
    
    if(maxAns>=minAns)  return -1;
    // if(n==1 && maxAns*2 < minAns ) return maxAns*2;
    ll ans=0;
    ans = inc(maxAns,v1,n);
    if(ans==0){
        maxAns = LLONG_MAX;
        for(ll i=n-1;i>=0 ; i--){
            maxAns = min(maxAns, 2*v1[i]);
            if(maxAns>=minAns)  continue;
            ans = inc(maxAns,v1,n);
        }
    }
    if(ans>0) return maxAns;
    return -1;
}

int main(){
    ll n,m;
    cin >> n >> m;
    ll ans = tl(n,m);
    cout << ans <<endl;
}