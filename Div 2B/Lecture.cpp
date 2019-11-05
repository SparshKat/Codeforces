#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

void passage(ll n, ll m){
    map<string,string> ma;
    for(ll i=0;i<m;i++){
        string lang1,lang2;
        cin>>lang1;
        cin>>lang2;
        ma.insert({lang1,lang2});
    }
    // for(auto i:ma){
    //     cout << i.first<<" -> "<<i.second<<endl;
    // }
    // char ch;
    // cin>>ch;
    string str,ans,temp="";
    cin.ignore();
    getline(cin,str,'\n');
    str+=" ";
    for(ll i=0;i<str.length();i++){
        if(str[i]==' '){
            ll len1 = temp.length();
            ll len2 = ma[temp].length();
            if(len1<=len2) ans+=temp;
            if(len1>len2) ans+=ma[temp];
            ans+=" ";
            temp="";
        }else{
            temp+=str[i];
        }
    }
    cout << ans<<endl;
    // cout <<str<<endl;
}

int main(){
    ll n,m;
    cin >> n >> m;
    passage(n,m);
}