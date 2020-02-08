#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define vi vector<int>
#define sb __builtin_popcount
#define vll vector<ll>
#define vvi vector<vector<int> >
#define sz(v) ((int)(v).size())
#define vpii vector<pair<int,int> >
#define MOD (ll)1000000007
using namespace std;
using pi = pair<ll, ll>;
vector<pi> pr;

int main(){
	int n; scanf("%d",&n);
	ll ans = 1ll * n * n;
	for(int i=0; i<n; i++){
		int m; scanf("%d",&m);
		vector<int> v(m);
		for(int i=0; i<m; i++) scanf("%d",&v[i]);
		reverse(all(v));
		if(is_sorted(all(v))){
			pr.emplace_back(v[0], v.back());
		}
	}
	sort(all(pr));
	for(int i=0; i<sz(pr); i++){
		ans -= pr.end() - lower_bound(all(pr), pi(pr[i].second, -1));
	}
	cout << ans << endl;
}