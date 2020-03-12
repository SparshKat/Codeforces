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

void vol(ll a,ll b){
    ll ans=0;
    ll change= abs(a-b);
    ans+= (change/5);
    change%=5;
    ans+=(change/2);
    change%=2;
    ans+= (change/1);
    change%=1;
    cout<<ans<<endl;
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
        vol(a,b);
    }
}