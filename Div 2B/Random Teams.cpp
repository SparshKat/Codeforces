#include<iostream>
#define ll long long
using namespace std;

ll comb(ll num){
    return (num*(num-1))/2;
}

void teams(ll n, ll x){
    ll minAns = 0, maxAns =0;
    if(n<x){
        cout <<"0"<<endl;
        return ;
    }
    ll y = n/x;
    ll rem = n%x;
    maxAns = comb(n-(x-1));
    minAns = (x - rem) * (comb(y)) + rem * (comb(y + 1));
    cout << minAns <<" " <<maxAns<<endl;
}

int main(){
    ll n,m,k;
    cin>> n>>k;
    teams(n,k);
    return 0;
}