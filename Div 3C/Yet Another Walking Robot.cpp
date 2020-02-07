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

void robot(ll n){
    ll dp[n+5][5];
    map<pi,ll> m;
    ll val1=0,val2=0, li=-1,ri=-1,minEl = LLONG_MAX;
    string s;
    cin>>s;
    dp[0][0] = 0;
    dp[0][1] = 0;
    m.insert({{0,0} , 0});
    foe(i,n){
        
        if(s[i-1] == 'L'){
            dp[i][0] = dp[i-1][0]-1;
            dp[i][1] = dp[i-1][1];
        } else if(s[i-1] == 'R'){
            dp[i][0] = dp[i-1][0]+1;
            dp[i][1] = dp[i-1][1];
        } else if(s[i-1] == 'U'){
            dp[i][0] = dp[i-1][0];
            dp[i][1] = dp[i-1][1]+1;
        } else if(s[i-1] == 'D'){
            dp[i][0] = dp[i-1][0];
            dp[i][1] = dp[i-1][1]-1;
        }
        pi p;
        p.first = dp[i][0];
        p.second = dp[i][1];
        if(m.count(p)){
            if(minEl > (i-m[p])){
                li = m[p]+1;
                ri = i;
                minEl = min(minEl, (i-m[p]));
            }
            m[p] = i;
        }
        m.insert({p,i});
    }

    if(li==-1 && ri==-1){
        cout<<"-1"<<endl;
    } else {
        cout<<li<<" "<<ri<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        robot(n);
    }
}