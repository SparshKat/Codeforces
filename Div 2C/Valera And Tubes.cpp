#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define foe(i,n) for(int i=1;i<=n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int> >
#define vpll vector<pair<ll,ll> >
#define MAX 100002
using namespace std;
using pi = pair<ll, ll>;

vpll traverse(ll n,ll m){
    vpll v;
    fo(i,n){
        if(i%2==0){
            for(ll j=0;j<m;j++){
                v.pb({i,j});
            }
        }
        else{
            for(ll j=m-1;j>=0 ; j--){
                v.pb({i,j});
            }
        }
    }
    return v;
}

void tubes(ll n,ll m,ll k){
    // ll arr[310][310];
    vpll v;
    v = traverse(n,m);
    ll j=0;
    fo(i,k-1){
        cout<<"2 ";
        ll k=j+2;
        while(j<k){
            cout<<v[j].first+1 <<" "<<v[j].second+1<<" ";
            j++;
        }
        cout<<endl;
    }
    cout<<v.size() - (2*(k-1))<<" ";
    while(j<v.size()){
        cout<<v[j].first+1 <<" "<<v[j].second+1<<" ";
        j++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    tubes(n,m,k);
}