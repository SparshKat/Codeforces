#include<iostream>
#include<queue>
#include<vector>
#define ll long long
#define MAX 100000000
using namespace std;

// void soe(vector<bool> *prime){
//     for(ll p=2 ; p*p<=MAX;p++){
//         if(prime[p]==true){
//             for(ll i=p*p ; i<n; i+=p) prime[i]=false;
//         }
//     }
// }

bool cleanHouse(ll n){
    ll count=0;
    string str1,str2;
    cin>>str1 >> str2;
    queue<ll> q;
    vector<ll> v1;
    for(ll i=0;i<n;i++){
        if((str1[i] ^ str2[i]) !=0){
            q.push(i);
            v1.push_back(i);
        }
    }
    if(q.size()!=2) return false;
    while(!q.empty()){
        string temp1= str1 , temp2 = str2;
        ll el = q.front();
        q.pop();
        for(ll i=0;i<v1.size();i++){
            if(v1[i]==el) continue;
            swap(temp1[el],temp2[v1[i]]);
            int x = temp1.compare(temp2);
            if(x==0) return true;
            temp1 = str1; temp2 =str2;
        }
    }
    return false;
}
    
 
int main(){
    ll k;
    // map<char,int> m;
    // for(int i=0;i<26;i++){
    //     m[char(97+i)] = i+1;
    // }
    
    cin >> k;
    while(k){
        ll n;
        cin>>n;
        bool c = cleanHouse(n);
        c==1? cout<<"Yes"<<endl : cout<<"No"<<endl;
        k--;
    }
}