#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
using namespace std;

//g++ --std=c++11 cf.cpp -o test

void matrix(ll m,ll n){
    ll** b = new ll*[m];
    ll** a = new ll*[m];
   
    for(ll i=0;i<m;i++){
        b[i] = new ll[n];
        a[i] = new ll[n];
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>> b[i][j];
            a[i][j] = 1;
        }
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            if(b[i][j]==0){
                for(ll k=0; k<m;k++) a[k][j] = 0;
                for(ll k=0; k<n ;k++) a[i][k] = 0;
            }
        }
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            ll s = a[i][j];
            for(ll k=0; k<m;k++) s = a[k][j] | s ;
            for(ll k=0; k<n ;k++) s = a[i][k] | s ;
            if(s != b[i][j]) {
                cout <<"NO"<<endl;
                return;
            }
        }
    }


    cout <<"YES"<<endl;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    ll n,m;
    cin  >> m>>n;
    matrix(m,n);
    // cout << ans<<endl;
}