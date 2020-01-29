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
#define MAX 1000000
#define TIME 1440
using namespace std;
using pi = pair<ll, ll>;

void ways(ll n){
    ll arr[n+1];
    ll sum=0;
    fo(i,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    // cout << sum << endl;
    if(sum%3!=0){
        cout<<"0"<<endl;
    } else {
        ll ways=0,new_count=0,new_sum=0;
        fo(i,n-1){
            new_sum += arr[i];
            if(new_sum == (2*sum)/3){
                ways+=new_count;
            }
            if(new_sum == sum/3){
                new_count++;
            }
        }
        cout<<ways<<endl;
    }
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ways(n);
}