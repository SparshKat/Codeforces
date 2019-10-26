#include<iostream>
#include<string>
#define ll long long
using namespace std;

string gym(ll n){
    int flag= 0;
    ll chest=0,biceps=0,back=0;
    for(ll i=0;i<n; i++){
        ll ch;
        cin >> ch;
        if(flag==0) chest+=ch;
        if(flag==1) biceps+=ch;
        if(flag==2) back+=ch;
        flag= (flag+1)%3;
    }
    if(chest>biceps && chest>back) return "chest";
    if(biceps>chest && biceps>back) return "biceps";
    else return "back";
}

int main(){
    ll n;
    cin >> n;
    string ans = gym(n);
    cout << ans <<endl;
}
