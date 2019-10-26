#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
int jump(ll n){
     
    ll *arr = new ll[n];
    ll Max=0,Min=1111;
    for(int i=0;i<n;i++){
        ll temp; cin>>temp;
        arr[i] = temp;
        if(i>0)Max=max(Max,arr[i]-arr[i-1]);
        if(i>1)Min=min(Min,arr[i]-arr[i-2]);
    }
    if(n==3) return arr[2]-arr[0];
    if(Min!=1111)Max=max(Max,Min);
    return Max;
}
 
int main(){
    ll n;
    cin >> n;
    int temp = jump(n);
    cout <<temp <<endl;
}