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

void garland(string s,string t){
	vll v1(26,0),v2(26,0);
	ll i;
	for(i=0;i<s.length();i++)
		v1[s[i]-'a']++;
	for(i=0;i<t.length();i++)
		v2[t[i]-'a']++;
	ll ans=0;
	for(i=0;i<26;i++)
	{
		ans+=min(v1[i],v2[i]);
		if(v1[i]==0 && v2[i]>0)
		{
			cout<<"-1"<<endl;
			return ;
		}
	}
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s,t;
	cin>>s;
	cin>>t;
	garland(s,t);
}


