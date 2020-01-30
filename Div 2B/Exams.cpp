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

bool mycomp(pi a, pi b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

void exams(ll n){
    vpll v;
    fo(i,n){
        ll temp1 , temp2;
        cin>>temp1>>temp2;
        v.pb({temp1,temp2});
    }
    sort(all(v) , mycomp);
    ll ai = v[0].first , bi = v[0].second;
    ll lastDay = bi;
    for(ll i=1;i<n;i++){
        if(lastDay <= v[i].second){
            lastDay = v[i].second;
        } else {
            lastDay = v[i].first;
        }
    }
    cout << lastDay << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    exams(n);
}