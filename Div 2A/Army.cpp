#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define MAX 1000003
using namespace std;
using pi = pair<ll, ll>;

ll army(ll n){
    vector<ll> rank;
    for(ll i=0;i<n-1;i++){
        ll temp; cin>>temp;
        rank.pb(temp);
    }
    // for(ll i=0;i<rank.size();i++) cout<<rank[i] <<" ";
    // cout<<"1st passed"<<endl;
    ll a,b;
    cin>>a>>b;
    ll *dp = new ll[n+1];
    dp[0] = -1;
    dp[1] = 0;
    for(ll i=2;i<=n;i++){
        dp[i] = dp[i-1] + rank[i-2]; 
    }
    // for(ll i=2;i<=n;i++) cout<<dp[i] <<" ";
    // cout <<endl;
    return (dp[b]-dp[a]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    // cout << n << endl;
    ll ans = army(n);
    cout <<ans<<endl;
}