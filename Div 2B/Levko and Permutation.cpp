#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define foe(i,n) for(int i=1;i<=n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define vi vector<ll>
#define vvi vector<vector<int> >
#define vpii vector<pair<int,int> >
#define MAX 1000000
using namespace std;
using pi = pair<ll, ll>;

void permut(ll n,ll k){
    if(n==k){
        cout<<"-1"<<endl;
        return;
    }
    ll arr[n+1];
    ll dp[n+1];
    fo(i,n){
        arr[i]=i+1;
    }
    dp[0] = n-k;
    foe(i,n-k-1){
        dp[i] = i;
    }
    for(ll i=n-k;i<n;i++){
        dp[i] = arr[i];
    }
    fo(i,n){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin >> n >> k;
    permut(n,k);
}