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

void lucky(ll n){
	string ans= "";
	bool flag= 0;
	while(n>0){
		if(n<4){
			cout<<"-1"<<endl;
			return ;
		}
		if(n%7!=0){
			n-=4;
			ans+="4";
			continue;
		}
		ans+="7";
		n-=7;
	}
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>> n;
	lucky(n);
}