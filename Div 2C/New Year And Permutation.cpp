#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define foe(i,n) for(int i=0;i<=n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define Foe(i,k,n) for(int i=k;i<=n;++i)
#define vi vector<int>
#define sb __builtin_popcount
#define vll vector<ll>
#define vvi vector<vector<int> >
#define sz(v) ((int)(v).size())
#define vpii vector<pair<int,int> >
#define MOD (ll)1000000007
using namespace std;
using pi = pair<ll, ll>;

void permute(ll n,ll m){
	ll fact[n+1];
	fact[0] = 1;
	Foe(i,1,n) fact[i] = fact[i-1]*i%m;
	ll ans=0;
	Foe(i,1,n){
		ans+= (n - i + 1) * (fact[i] * fact[n - i + 1] % m);
		ans%=m;
	}
	cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n,m;
	cin>>n>>m;
	permute(n,m);
}