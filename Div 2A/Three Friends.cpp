#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

//g++ --std=c++11 cf.cpp -o test

void board(ll a,ll b,ll c){
    ll temp = abs(a-b) + abs(a-c) + abs(b-c);
    for(ll i=-1; i<2 ; i++){
        ll a1 = a+i;
        for(ll j=-1;j<2;j++){
            ll b1 = b+j;
            for(ll k=-1 ; k<2; k++){
                ll c1 = c+k;
                ll temp1 = abs(a1-b1) + abs(a1-c1) + abs(b1-c1);
                temp = min(temp1 , temp);
            }
        }
    }
    cout << temp << endl;
}

int main()
{
    ll q;
    cin>> q;
    while(q--){
        ll a,b,c;
        cin >> a>> b >> c ;
        board(a,b,c);
    }
}