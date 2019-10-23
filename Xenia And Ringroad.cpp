#include<iostream>
#include<queue>
using namespace std;

long long costFind2(queue<int> q, long long n){
    long long i=1;
    long long ans = 0;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        if(i<num){
            ans+= (num-i);
            i = num ;
        }
        else if(i>num){
            ans+= (n-i) + (num-1) + 1;
            i = num ;
        } 
    }
    return ans;
}

int main(){
    long long n,m;
    cin >> n >> m;
    queue<int> q;
    for(int i=0 ; i<m ;i++){
        int num=0;
        cin >> num;
        q.push(num);
    }
    long long b = costFind2(q,n);
    cout << b<<endl;
    return 0;
}