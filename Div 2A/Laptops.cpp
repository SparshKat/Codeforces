#include<iostream>
#include<algorithm>
#include<vector>
#include<limits>
#define ll long int
using namespace std;

bool mycomp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first<b.first;
}

bool laptop(ll n){
    vector<pair<ll,ll> > v;
    for(int i=0;i<n;i++){
        ll ai,bi;
        cin >> ai>>bi;
        v.push_back({ai,bi});
    }
    sort(v.begin(),v.end(),mycomp);
    for(int i=0;i<n-1;i++){
       if(v[i].second>v[i+1].second) return true;
    }
    return false;
}

int main(){
    ll n;
    cin >> n;
    bool c = laptop(n);
    c==1?cout<<"Happy Alex"<<endl : cout <<"Poor Alex"<<endl;
    return 0;
}
