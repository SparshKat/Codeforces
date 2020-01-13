#include <iostream>
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long int

using namespace std;
using pi = pair<ll, ll>;

string eggs(ll n){
	vector<ll> a,g;
	ll s_a=0,s_g=0, global_sum=0;
	for(ll i=0;i<n;i++){
		ll t1,t2;
		cin>>t1>>t2;
		a.pb(t1); 
		g.pb(t2); 
	}
	string ans="";

	for(ll i=0;i<n;i++){
		if(a[i] + s_a <= 500 + s_g){
			s_a += a[i];
			ans+="A";
		} else if( abs(s_a - (s_g + g[i])) <= 500){
			s_g += g[i];
			ans+= "G";
		} else return "-1";
	}
	return ans;
	// cout <<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n;
	cin>>n;
	string t = eggs(n);
	cout << t <<endl;
}