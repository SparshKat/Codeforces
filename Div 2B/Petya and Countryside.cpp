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

void rain(ll n){
	ll v[n+11];
	ll tempAns = LLONG_MIN , ans = LLONG_MIN;
	fo(i,n)	cin>>v[i];
	fo(i,n){
		ll j=i-1,k=i+1;
		while(i!=0 && j>=0 && v[j]<= v[j+1]) j--;
		j++;
		tempAns = i-j;
		while(i!=n && k<n && v[k-1] >= v[k]) k++;
		k--;
		tempAns += (k-i)+1;
		ans = max(tempAns,ans);
	}
	cout<<ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
	cin>>n;
	rain(n);
}


