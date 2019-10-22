#include<iostream>
#include<vector>
using namespace std;

int devuSing(int n,int d){
    vector<int> v;
    int gaps=n-1, sum=0, ans = 0;
    for(int i=0;i<n;i++){
        int temp ;
        cin >> temp;
        v.push_back(temp);
        sum+= temp;
    }
    sum+= (n-1)*10;
    if(sum>d) return -1;
    ans += (n-1)*2;
    return ans += (d-sum)/5;
}


int main(){
    int n,d;
    cin >> n >> d;
    int temp = devuSing(n,d);
    cout << temp << endl;
    return 0;
}