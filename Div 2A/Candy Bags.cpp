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

void candy(ll n){
    ll i=1,j=n*n;
    while(i<j){
        fo(k,(n/2)){
            cout<<i<<" "<<j<<" ";
            i++; j--;
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    candy(n);
}