#include<iostream>
#include<map>
#include<vector>
using namespace std;

void oddOut(int n){
    map<int,vector<int> > m;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp ;
        m[temp%2].push_back(i+1);
    }
    for(auto i: m){
        if((i.second).size() == 1){
            int temp = i.second.front();
            cout << temp <<endl;
        } 
    }
}


int main(){
    int n;
    cin >> n ;
    oddOut(n); 
    return 0;
}