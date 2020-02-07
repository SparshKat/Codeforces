#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define ld long double
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define foe(i,n) for(int i=1;i<=n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int> >
#define vpll vector<pair<ll,ll> >
using namespace std;
using pi = pair<ll, ll>;

void monster(ll n,ll a,ll b,ll k){
    vll v;
    ll ans=0;
    fo(i,n){
        ll temp;
        cin>>temp;
        temp= (temp%(a+b));
        if(temp == 0){
            temp+=(a+b);
        }
        if(temp > a){
            // temp-=a;
            v.pb(ceil((double(temp)/double(a))-1));
        }
        else ans++;
    }
    sort(all(v));
    // fo(i,v.size()) cout<<v[i]<<" --- "<<endl;
    ll i=0, el1 = -1;
    
    for(auto i : v){
        if(k-i >=0 ){
            ans++;
            k-=i;
        } 
    }
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    monster(n,a,b,k);
}