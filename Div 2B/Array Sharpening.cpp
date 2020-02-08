#include <iostream>
#include<bits/stdc++.h>
#include<numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i,n) for(int i=0;i<n;++i)
#define Fo(i,k,n) for(int i=k;i<n;++i)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int> >
#define vpii vector<pair<int,int> >
#define MAX 1000000
using namespace std;
using pi = pair<ll, ll>;

bool sharp(ll n){
    vll v,temp1,temp2;
    // if(n==1) return 1;
    fo(i,n){
        ll temp; cin>>temp;
        v.pb(temp);
    }
    ll i=0,j=0,k=n-1,l=0,ind=n-1;
    while(v[l]>=i && l<n){
        i++;
        l++;
    }
    i--;
    while(v[k] >= j && k>=0){
        k--;
        j++;
        ind--;
    }
    ind++;
    // cout<< i<<" -> "<<j<<endl;
    
    if(i<ind) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(sharp(n)){
            cout<<"YES"<<endl; 
        } else cout<<"NO"<<endl;
    }
}