#include<iostream>
#include<vector>
#include<algorithm>
#define ll double
using namespace std;

bool comp(vector<ll> a, vector<ll> b){
    for(ll i=0;i<b.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void seg(ll n){
    vector<ll> v;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        v.push_back(temp);
    }
    ll ri = -1 , li = -1;
    ll temp = v[0];
    for(ll i=1;i<n;i++){
        if(v[i]<temp) ri = i;
        temp = max(temp,v[i]);
    }
    temp = v[n-1];
    for(ll i=n-2;i>=0;i--){
        if(v[i]>temp) li = i;
        temp = min(temp,v[i]);
    }
    // cout <<li<<" "<<ri <<endl;
    if(li==-1 && ri==-1){ li=0; ri=0;}
    vector<ll> newV = v;
    // for(int i=0;i<n;i++){
    //     cout <<newV[i]<<" ";
    // }
    // cout<<endl;
    reverse(newV.begin()+li,newV.begin()+ri+1);
    // for(int i=0;i<n;i++){
    //     cout <<newV[i]<<" ";
    // }
    // cout<<endl;
    sort(v.begin(),v.end());
    bool c = comp(newV,v);
    if(c){
        cout<<"yes"<<endl;
        cout <<li+1<<" "<<ri+1<<endl;
    }   else cout<<"no"<<endl;
    return ;
    // if(li!=-1 && ri!=-1){
    //     cout <<"yes"<<endl;
    //     cout <<v[ri]<<" "<<v[li]<<endl;
    // } else cout<<"no"<<endl;
    // return ;
}

int main(){
    ll n;
    cin >> n;
    seg(n);
    return 0;
}