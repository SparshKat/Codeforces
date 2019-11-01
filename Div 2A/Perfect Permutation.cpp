#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

void permute(ll n){
    if(n%2!=0) {
        cout <<"-1"<<endl;
        return ;
    }
    ll *dp = new ll[n];
    for(ll i=0;i<n;i++){
        dp[i] = i+1;
    }
    for(ll i=0;i<n;i+=2){
        swap(dp[i],dp[i+1]);
    }
    for(ll i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    ll n1;
    cin>> n1;
    permute(n1);

    return 0;
}