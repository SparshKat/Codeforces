#include <iostream>
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long int

using namespace std;
using pi = pair<ll, ll>;

void wolves(ll n,ll m){
	char ar[n][m];
	ll ans=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			cin>>ar[i][j];
		}
	}

	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(ar[i][j]== 'W'){
				if(i+1<n && ar[i+1][j] == 'P') {
					ar[i+1][j] = '.';
					ans++;
				}
				else if(i-1>=0 && ar[i-1][j] == 'P') {
					ar[i-1][j] = '.';
					ans++;
				}
				else if(j+1<m && ar[i][j+1] == 'P') {
					ar[i][j+1] = '.';
					ans++;
				}
				else if(j-1>=0 && ar[i][j-1] == 'P') {
					ar[i][j-1] = '.';
					ans++;
				}
			}
		}
	}
	// for(ll i=0;i<n;i++){
	// 	for(ll j=0;j<m;j++){
	// 		cout <<ar[i][j] <<" ";
	// 	}
	// 	cout<<endl;
	// }

	cout <<ans<<endl;


}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n,m;
	cin>>n>>m;
	wolves(n,m);
}