#include<iostream>
#include<vector>
#define ll long long
using namespace std;

void game(ll n, ll m, ll k){
    ll *arr = new ll[m+1];
    for(ll i=0;i<m+1;i++){
        ll temp; cin>>temp;
        arr[i]=temp;
    }
    ll comp = arr[m], ans=0;
    for(ll i=0;i<m;i++){
        ll no = __builtin_popcount (comp^arr[i]);
        if(no<=k) ans++;
    }
    cout << ans<<endl;
}

int main(){
    ll n,m,k;
    cin>> n>>m>>k;
    game(n,m,k);
    return 0;
}