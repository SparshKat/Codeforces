#include <iostream>
#include <bits/stdc++.h>
#include <numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; ++i)
#define foe(i, n) for (int i = 1; i <= n; ++i)
#define Fo(i, k, n) for (int i = k; i < n; ++i)
#define vi vector<int>
#define vll vector<ll>
#define vvl vector<vector<ll>>
#define vpll vector<pair<ll, ll>>
#define MOD 1000000007
using namespace std;
using pi = pair<ll, ll>;

void pocket(ll n,ll m){
  vector<string > v;
  set<char> s;
  fo(i,n){
    string t;
    cin>>t; v.pb(t);
  } 
  ll ans = 1;
  fo(j,m){
    ll cnt = 0;
    fo(i,n){
      if(s.find(v[i][j]) == s.end()) {cnt++; s.insert(v[i][j]); }
    }
    s.clear();
    ans *= (cnt%MOD);
    ans %= MOD;
  }
  cout<<ans%MOD<<endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,m;
  cin>>n>>m;
  pocket(n,m);
}