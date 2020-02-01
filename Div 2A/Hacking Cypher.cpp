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

void cypher(string s,ll a,ll b){
    string left, right ;
    ll n, x ;
    bool possible=false ;
    n = s.length();
    ll r[n+2], l[n+2] ;
    l[0]=0 ;
    for(int i=0 ; i<n ; i++)
      l[i+1]=(l[i]*10+s[i]-'0')%a ;

    r[n+1]=0 ;
    x=1 ;

    for(int i=n-1 ; i>=0 ; i--){
        r[i+1]=((s[i]-'0')*x+r[i+2])%b ;
        x=(x*10)%b ;
    }
    for(int i=1 ; i<n ; i++){
      if(!l[i] && !r[i+1] && s[i]!='0')
        {
          possible=true ;
          left=s.substr(0, i) ;
          right=s.substr(i, n-i) ;
          break ;
        }
    }
    if(possible)
      {
        cout<< "YES" << endl ;
        cout<< left << endl << right ;
      }
    else cout<< "NO" ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b;
    string s;
    cin>>s ;
    cin>>a>>b;
    cypher(s,a,b);
}