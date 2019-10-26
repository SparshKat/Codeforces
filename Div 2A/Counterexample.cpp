#include<iostream>
#include<algorithm>
#include<math.h>
#include<limits>
#define ll long long
using namespace std;

void game(ll l,ll r){
    if (l%2==1){
       l+=1;    
    }  
    if (l+2>r){
        cout <<"-1"<<endl;
    }
    else{
        cout << l << " " << l+1 <<" " <<l+2 <<endl;
    }
}
 
int main(){
    ll n1,n2;
    cin >> n1>>n2;
    game(n1,n2);
}