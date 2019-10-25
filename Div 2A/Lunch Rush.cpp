#include<iostream>
#include<vector>
#include<limits>
#define ll long int
using namespace std;

void eat(int n,int k){
    vector<pair<ll,ll> > v;
    ll ans = LONG_MIN;
    for(int i=0;i<n;i++){
        ll fi , ti ;
        cin >> fi >> ti;
        if(ti>=k){
            ans = max(ans , fi-(ti-k));
        } else {
            ans = max(ans,fi);
        }
    }
    cout << ans <<endl;
}

int main()
{
    int n,k;
    cin >> n >> k;
    eat(n,k);
    return 0;
}
