#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define all(v) (v).begin(), (v).end()
using namespace std;
using pi = pair<ll, ll>;

string comp(vector<ll> p1, vector<ll> p2,ll flag){
    ll temp = min(p1.size(), p2.size());
    ll i=0;
    for( ;i<temp ;i++){
        if(p1[i] > p2[i]) return "first";
        else if(p1[i] < p2[i]) return "second";
    }
    while(i < p1.size()) return "first";
    while(i < p2.size()) return "second";

    if(flag==1) return "first";
    else return "second";
}

string wrestle(ll n){
    vector<ll> p1,p2;
    ll sum1=0,sum2=0,flag=1;
    for(ll i=0;i<n;i++){
        ll temp;
        cin >> temp;
        if(temp<0){
            p2.push_back(abs(temp));
            sum2+= abs(temp);
            flag=2;
        } else{
            p1.push_back(temp);
            sum1+=temp;
            flag=1;
        }
    }
    if(sum1>sum2) return "first";
    else if(sum2>sum1) return "second";
    
    return comp(p1,p2,flag);
    // if(p1.size() > p2.size()) return "first";
    // else if(p2.size() > p1.size()) return "second";
    
    // if(p1[p1.size()-1] > p2[p2.size()-1]) return "first";
    // else if(p1[p1.size()-1] < p2[p2.size()-1]) return "second";

    // if(flag == 1) return "first";
    // else return "second";
}

int main()
{
    ll n;
    cin >> n;
    string t = wrestle(n);
    cout << t << endl;
}