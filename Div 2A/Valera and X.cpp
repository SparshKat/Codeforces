#include<iostream>
#include<vector>
#define ll long long
using namespace std;

bool game(int n){
    vector<vector<char> > box(n,vector<char>(n,'-'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> box[i][j];
        }
    }
    
    char diag = box[0][0];
    char non = box[0][1];
    if(diag==non) return false;
    // cout << diag <<" " <<non<<endl;
    ll total = n*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                if(diag==box[i][j]){
                    total--;
                    continue;
                }else return false;
            }
            else if(box[i][j]==non) total--;
            else return false;
        }
    }
    
    return true;

}
 
int main(){
    ll n1;
    cin >> n1;
    bool c = game(n1);
    if(c) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}