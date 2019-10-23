#include <iostream>
#include<queue>
#include <vector>

using namespace std;

void markGrid(vector<vector<char>> &arr, int r , int c,int m, int n){
    for(int i=0;i<n;i++){
        if(arr[r][i] == 'S') continue;
        if(arr[r][i] =='1'){
            arr[r][i] = 'S';
        }else {
            arr[r][i] = '0';
        }
    }
    for(int j=0;j<m;j++){
        if(arr[j][c] == 'S') continue;
        if(arr[j][c] == '0'){
            arr[j][c] = 'S';
        }else {
            arr[j][c] = '1';
        }
    }
}


void cakinator(int m, int n)
{
    vector<vector<char>> arr(m,vector<char>(n,'.'));
    queue<pair<int,int> > q;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin >> ch;
            if(ch=='S'){
                arr[i][j] = 'S';
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        markGrid(arr,p.first,p.second,m,n);
    }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != 'S'){
                count++;
            }
        }
    }
    cout << count <<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout << arr[i][j];
    //     }
    //     cout <<endl;
    // }

}

int main()
{
    int m, n;
    cin >>m>>  n;
    cakinator(m,n);
   
    return 0;
}