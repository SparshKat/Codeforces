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

void hay(ll n,ll d){
	ll arr[n+1];
	ll j =1;
	fo(i,n){
		cin>>arr[i];
	}
	while(j<n && d>=0){
		while(arr[j] && d-j>=0){
			arr[0]++; arr[j]--;
			d-=j;
		}
		j++;
	}
	cout<<arr[0]<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t; cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		hay(n,x);
	}
}


