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
#define MAX 1024
using namespace std;
using pi = pair<ll, ll>;


ll hex(int n){
  ll ans= 0;
  // if(n==0) return 1;
  for(ll i=1; i<MAX;i++){
    string temp = "";
    ll t = i;
    while(t>0){
      ll rem = t%2;
      temp += to_string(rem);
      // cout<<rem<<endl;
      t/=2;
    }
    reverse(all(temp));
    // cout<<temp<<endl;
    if(stoi(temp) <= n) ans++;
    // else return ans;
  }
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  ll ans = hex(n);
  cout<<ans<<endl;
}