#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long int
#define MOD 1000000007
using namespace std;

//g++ --std=c++11 cf.cpp -o test

void magic(){
    int** arr = new int*[3];
    for(int i = 0; i < 3; ++i)
        arr[i] = new int[3];
    // ll** arr[3] = new ll*[3];
    // for(int i = 0; i < 3; ++i)
    //     arr[i] = new ll[3];

    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    int s1 = (arr[1][0]) + (arr[2][0]) ; 
    int s2 = (arr[0][1]) + (arr[2][1]) ;
    int s3 = (arr[0][2]) + (arr[1][2]) ;
    int eq1 =  s2-s1; //(x-y)

    int eq2 = s3;// (x+y)
    int eq3 = eq1 + eq2 ;
    int x = eq3/2;
    int y = x-eq1;
    int z = (s1+x)-s3;
    
    arr[0][0] = x;
    arr[1][1] = y;
    arr[2][2] = z;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
}


int main(){
    magic();
    // cout << ans<<endl;
}