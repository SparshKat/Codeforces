#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define all(v) (v).begin(), (v).end()
using namespace std;
using pi = pair<ll, ll>;

void pebbles(ll n,ll k){
    ll *peb = new ll[n+1];
    ll *colors = new ll[k+1];
    for(ll i=0;i<k;i++){
        colors[i] = i+1;
    }
    ll maxEl = LLONG_MIN, minEl = LLONG_MAX;
    for(ll i=0;i<n;i++) {
        ll temp ; cin>>temp; 
        peb[i] = temp;
        maxEl = max(maxEl,temp);
        minEl = min(minEl,temp);
    }
    if(maxEl-minEl > k){
        cout <<"NO"<<endl;
        return ;
    }
    cout <<"YES"<<endl;
    for(ll i=0;i<n;i++){
        ll temp = peb[i];
        for(ll j=0;j<temp;j++){
            cout << colors[j%k]<<" ";
        }
        cout <<endl;
    }


}

int main()
{
    ll n,k;
    cin >> n >> k;
    pebbles(n,k);
}