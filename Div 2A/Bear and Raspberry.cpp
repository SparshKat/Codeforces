#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void raspberry(int n,int c){
    int ans = INT_MIN;
    vector<int> x;
    for(int i=0;i<n;i++){
        int temp ;
        cin>>temp;
        x.push_back(temp);
    }
    for(int i=0;i<n-1;i++){
        if(x[i]>x[i+1]){
            int t = x[i]- (x[i+1] +c);
            if(t<0) continue;
            ans = max(ans,t);
        } else continue;
    }
    if(ans==INT_MIN) cout <<"0"<<endl;
    else cout << ans <<endl;
}

int main()
{
    int n,c;
    cin >> n >> c;
    raspberry(n,c);
    return 0;
}