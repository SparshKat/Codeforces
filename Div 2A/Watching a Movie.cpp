#include<iostream>
#include<queue>
#define ll long long
using namespace std;

void movie(ll n, ll x){
    queue<pair<ll,ll> > q;
    ll ans=0, time = 0;
    for(int i=0;i<n;i++){
        ll in,end;
        cin>>in>>end;
        q.push({in,end});
    }
    while(!q.empty()){
        pair<ll,ll> p= q.front();
        q.pop();
        while(time+x<p.first){
            time+=x;
            continue;
        }
        ans+=p.second-time;
        time=p.second;
    }
    cout << ans <<endl;
}

int main(){
    ll n,x;
    cin>> n>>x;
    movie(n,x);

    return 0;
}