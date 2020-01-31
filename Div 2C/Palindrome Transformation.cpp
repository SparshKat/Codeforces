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

ll diff(char ch1, char ch2){
    ll temp = abs(ch1-ch2);
    return min(temp , 26-temp);
}

void palindrome(ll n,ll m,string s){
    ll ans=0 , i = m;
    if(i > n/2){
        reverse(all(s));
        i = n-i;
    }
    ll j = i,k = i, lm = i, rm= i;
    // ll i,j,k,l , ans=0;
    // k = m , l = n-k;
    // i = k, j=l;
    while(j<=n/2){
        if(s[n-j] != s[j]){
            // cout<<i<<"->"<<j<<" "<<k<<" -> "<<l<<endl;
            rm = j;
            ans += diff(s[n-j],s[j]);
            s[n-j] = s[j];
        }
        j++;
    }
    j--;
    while(j>=0){
        if(s[n-j] != s[j]){
            // cout<<i<<"->"<<j<<" "<<k<<" -> "<<l<<endl;
            lm = j;
            ans += diff(s[n-j],s[j]);
            s[n-j] = s[j];
        }
        j--;
    }
    // cout<<s<<endl;
    ans+= min(abs(lm-i),abs(rm-i)) + rm-lm;
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n ,m;
    cin>>n>>m;
    string s;
    
    cin>>s;
    // ll ans = abs(97-s[7]);
    // cout<<ans;
    palindrome(n-1,m-1,s);

}