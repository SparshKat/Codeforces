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
#define MAX 1000000
#define TIME 1440
using namespace std;
using pi = pair<ll, ll>;


void team(ll n,ll m){
    if((n-1) <= m && m<=2*(n+1)){
        if(n>m){
            cout<<"0";
            n--;
        }
        while(n && m && m>n){
        cout<<"110";
        n--;
        m-=2;
        }
        while(n && m && n==m){
            cout<<"10";
            n--;
            m--;
        }
        while(m){
            cout<<"1";
            m--;
        }
        cout<<endl;
        
    } else {
        cout<<"-1"<<endl;
    }
} 


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    team(n,m);
}