#include <iostream>
#include <bits/stdc++.h>
#include<numeric>
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define MAX 1000000
using namespace std;
using pi = pair<ll, ll>;

void george(ll n,ll m,ll k){
    
    ll arr[n+1];
    arr[0]= 0;
    for(ll i=1 ; i<=n;i++){
        cin>>arr[i];
    }
    for(ll i=1;i<=n;i++){
        arr[i] += arr[i-1];
    }
    ll dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=k;j++){
            if(i >= j*m){
                ll maxi = dp[i][j];
                maxi = max(dp[i-1][j],maxi);
                maxi = max(dp[i-m][j-1] + arr[i]-arr[i-m] , maxi);
                dp[i][j] = maxi;
            }
            
        }
    }
    cout << dp[n][k] <<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,k;
    cin >> n>>m>>k;
    george(n,m,k);
}