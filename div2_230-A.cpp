#include<iostream>
#include<queue>
#include<set>
using namespace std;

int main(){
    // set<pair<int,int > > s1;
    priority_queue<pair<int,int > , vector<pair<int,int > > , greater<pair<int,int > > > s1;
    int s , n ,flag=1;
    cin >> s >> n ;
    for(int i=0 ; i<n ; i++){
        int x1 , y1 ;
        cin >> x1 >> y1 ;
        s1.push(make_pair(x1,y1));
    }
    //cout <<"--------------" <<endl;
    while(!s1.empty()){
        pair<int,int> p = s1.top();
        if(s>p.first){
            //cout <<"greater"<<endl;
            s+= p.second;
        } else {
            flag =0;
            //cout <<"NO";
            break;
        }
        s1.pop();
    }
    flag==1?cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}