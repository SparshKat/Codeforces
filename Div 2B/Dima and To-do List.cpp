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

void todo(ll n,ll k){
	ll arr[n+1], sum[k+1];
	fo(i,k) sum[i] = 0;
	fo(i,n){
		cin>>arr[i];
		sum[i%k] += arr[i];
	}
	ll minInd = LLONG_MAX , minSum = LLONG_MAX;
	fo(i,k){
		if(sum[i] < minSum){
			minInd = i;
			minSum = sum[i];
		}
	}

	cout<<minInd+1<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
	cin>>n>>m;
	todo(n,m);
}


