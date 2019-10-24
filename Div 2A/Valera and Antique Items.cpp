#include<iostream>
#include<queue>
#include<set>
using namespace std;

//

void auction(int n , int v){
    int count =0 ;
    set<int> s;
    priority_queue< pair<int,int>,vector< pair<int,int>>,greater< pair<int,int>> > pq;
    for(int i=0;i<n;i++){
        int temp ; 
        cin >>temp;
        while(temp!=0){
            int amount ; 
            cin >> amount;
            if(amount<v && s.find(i+1) == s.end()){
                s.insert(i+1);
                count++;
                pq.push({i+1,amount});
            }
            temp--;
        }
    }

    cout << count <<endl;
    if(!pq.empty()){
        while(!pq.empty()){
            int ans = pq.top().first;
            
            pq.pop();
            cout << ans <<" ";
        }
    }
    
    cout <<endl;
}

int main()
{
    int n, k;
    cin >>n>>  k;
    auction(n,k);
   
    return 0;
}