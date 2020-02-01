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

void typos(string s){
    ll i=0,j,k;
    string ans="";
    if(s.length()<3){
        cout<<s<<endl;
        return;
    }
    ans+= s[0];
    ans+=s[1];
    Fo(i,2,s.length()){
        char ch = s[i];
        if(ch == ans[ans.length()-1] && ch == ans[ans.length()-2]){
            continue;
        } else if(ch == ans[ans.length()-1] && ans[ans.length()-2] == ans[ans.length()-3]){
            continue;
        }
        ans+=ch;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    typos(s);
}