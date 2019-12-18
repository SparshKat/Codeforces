#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
using namespace std;

//g++ --std=c++11 cf.cpp -o test

bool same(string s, string t){
    if(s.length() != t.length()) return 0;
    for(ll i=0; i<t.length();i++){
        if (s[i] != t[i]) return 0;
    }
    return 1;
}

ll inSeq(string s, string t){
    ll len1 = s.length(), len2 =t.length() , i=0,j=0;

    for( ; i<len1 ;i++){
        if(s[i] == t[j]){
            j++;
        }
    }
    return (j==t.length());
}

ll isSubstring(string s1, string s2) 
{ 
    ll M = s1.length(); 
    ll N = s2.length(); 
  
    /* A loop to slide pat[] one by one */
    for (ll i = 0; i <= N - M; i++) { 
        ll j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
} 

string suffix(string s, string t){
    map<char,ll> m;
    for(auto it : m){

    }
    if(s.length() < t.length()) return "need tree";

    if(same(s,t)) return "need tree";

    for(ll i=0;i<s.length() ; i++){
        m[s[i]]++;
    }


    if(s.length() == t.length()){
        for(ll i=0;i<t.length();i++){
            if(m.find(t[i])==m.end() ) return "need tree";
            m[t[i]]--;
            if(m[t[i]] == 0) m.erase(t[i]);
        }
        return "array";
    }
    ll res = isSubstring(t,s);
    ll res2 = inSeq(s,t);
    // cout << res <<" -> " << res2 << endl;
    if(res>0){
        return "automaton";
    } else if(res2 == 1) {
        return "automaton";
    }else {
        for(ll i=0;i<t.length();i++){
            if(m.find(t[i])==m.end() ) return "need tree";
            m[t[i]]--;
            if(m[t[i]] == 0) m.erase(t[i]);
        }
        return "both";
    }


}

int main(){
    string s,t;
    cin >> s  >> t;
    string ans = suffix(s,t);
    cout << ans <<endl;
    // cout << ans<<endl;
}