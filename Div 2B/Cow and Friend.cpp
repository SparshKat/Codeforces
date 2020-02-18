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

void hops(ll n,ll x){
	ll maxEl = LLONG_MIN;
	ll arr[n+1];
	bool flag = 0;
	fo(i,n){
		cin>>arr[i];
		if(x == arr[i]){
			cout<<"1"<<endl;
			flag = 1;
		}
		maxEl = max(maxEl , arr[i]);
	}
	if(flag) return ;
	ll temp = ceil(double(x)/double(maxEl));
	if(temp < 2) cout<<"2"<<endl;
	else cout<<temp<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t; cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		hops(n,x);
	}
}


