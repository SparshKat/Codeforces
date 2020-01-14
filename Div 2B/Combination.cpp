#include <iostream>
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long int

using namespace std;
using pi = pair<ll, ll>;

bool mycomp(pi a,pi b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first > b.first;
}

ll cards(ll n){
	vector<pi> v;
	for(ll i=0;i<n;i++){
		ll points,choices;
		cin>>points>>choices;
		v.pb({points,choices});
	}
	sort(all(v), mycomp);
	ll counter=1,ans=0,i=0;
	while(counter>0 && i<n){
		counter--;
		ans+=v[i].first;
		counter+=v[i].second;
		i++;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n;
	cin>>n;
	ll ans =cards(n);
	cout<<ans<<endl;
}