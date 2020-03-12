#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(ll i=0;i<n;++i)
#define Fo(i,k,n) for(ll i=k;i<n;++i)
#define vi vector<ll>
#define sb __builtin_popcount
#define vll vector<ll>
#define vvl vector<vector<ll> >
#define vpll vector<pair<ll,ll> >
#define MOD (ll)1000000007
using namespace std;
using pi = pair<ll, ll>;

bool mycomp(pi a,pi b){
    return a.second< b.second;
}

void lockers(ll n,ll m){
    vpll vp;
    ll sum=0;
    fo(i,n){
        ll ai;
        cin>>ai;
        vp.pb({i+1,ai});
        sum+=ai;
    }
    if(m<n){
        cout<<"-1"<<endl;
        return ;
    }
    else if(m==n && n==2) {cout<<"-1"<<endl; return ;}
    else if(m==n){
        cout<<2*(sum)<<endl;
    }
    else if(m>n){
        sort(all(vp) , mycomp);
        sum=0;
        fo(i,n-1){
            sum+=vp[i].second+vp[i+1].second;
        }
        sum+=(vp[0].second+vp[n-1].second);
        cout<<sum<<endl;
    }
    fo(i,n-1){
        cout<<vp[i].first<<" "<<vp[i+1].first<<endl;
    }
    cout<<vp[0].first <<" "<<vp[n-1].first<<endl;

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        lockers(a,b);
    }
}