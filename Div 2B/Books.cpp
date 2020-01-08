#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define MAX 100000
using namespace std;
using pi = pair<int, int>;

ll books(ll n,ll t){
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll temp; cin>>temp;
        v.emplace_back(temp);
    }
    
    // for(ll i=1;i<n; i++) v[i] += v[i-1];
    // for(ll i=0;i<n; i++){
    //     cout << v[i]<<" ";
    // }
    // cout <<endl;
    
    ll l=0,h=0,size=LLONG_MIN , sum=0;
    while(l<=h && h<n){
        ll tempSize = 0;
        if(sum+v[h] <= t){
            tempSize = (h-l)+1;
            sum+=v[h];
            h++;
        } else if(sum+v[h] > t && l!=h){
            sum-=v[l];
            tempSize = h-l;
            l++;
        } else if(sum+v[h] >t && l==h){
            l++;h++;
        }
        size = max(size,tempSize);
    }

    return size;

}

int main()
{
    ll n,t;
    cin >> n >> t;
    ll ans = books(n,t);
    cout << ans << endl;
}