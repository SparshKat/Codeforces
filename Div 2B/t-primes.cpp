#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define MAX 10000000
using namespace std;

void soe(bool *prime,ll n){
    prime[0] = prime[1] = 1;
    for(ll p=2 ;p<MAX;p++){
        if(prime[p]==true){
            for(ll i=p*p ; i<n; i+=p) prime[i]=false;
        }
    }
}

bool checkDiv(bool *prime,ll n){
    double num = sqrt(n);
    // cout << num<<endl;
    // cout << prime[int(num)]<<endl;
    // cout <<int(num)<<endl;
    if(num == int(num) && prime[int(num)]) return true;
    else return false;
    
}

void tPrime(ll n){
    bool *arr = new bool[MAX];
    memset(arr,true , MAX);
    soe(arr,MAX);
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(temp == 4){
            cout<<"YES"<<endl;
        } 
        else if(temp%2==0 || temp==1){
            cout<<"NO"<<endl;
        } else {
            bool c = checkDiv(arr,temp);
            c==1?cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
        
    }
}

int main(){
    ll n;
    cin >> n ;
    tPrime(n);
}