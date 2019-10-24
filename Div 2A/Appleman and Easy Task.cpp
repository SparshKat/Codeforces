#include<iostream>
#include<vector>
using namespace std;

int dfs(vector<vector<char> > arr, int i,int j,int n){
    if(i<0 || j<0) return 0;
    if(i>=n || j>=n) return 0;
    if(arr[i][j] == 'o') return 1;
    else return 0;
}

bool checkBoard(int n){
    vector<vector<char> > arr(n,vector<char>(n,'x'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int total = 0;
            total += dfs(arr,i+1,j,n);
            total += dfs(arr,i,j+1,n);
            total += dfs(arr,i,j-1,n);
            total += dfs(arr,i-1,j,n);
            if(total%2!=0) return false; 
        }
    }
    return true;
    
}

int main()
{
    int n;
    cin >> n ;
    bool t = checkBoard(n);
    if(t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
