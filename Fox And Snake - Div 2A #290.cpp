#include<iostream>
#include<vector>
using namespace std;

void snakeMat(int n,int m){
    vector<vector<char>> arr(n,vector<char> (m,'.'));
    
    int i=0,j=0 ,flag =0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            vector<char> temp(m,'#');
            arr[i] = temp ;
        } else if(i%2!=0 && flag == 0){
            arr[i][m-1]= '#';
            flag = 1;
        } else if(i%2!=0 && flag==1){
            arr[i][0] = '#';
            flag = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j];
        }
        cout <<endl;
    }
}


int main(){
    int n,m;
    cin >> n >> m;
    snakeMat(n,m); 
    return 0;
}