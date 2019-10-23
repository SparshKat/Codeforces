#include<iostream>
#include<stack>
using namespace std;


int main(){
    int flag= 0;
    stack<int> s1,s2,s3;
    int n ;
    cin >> n;
    // int *arr = new int[n];
    for(int i=1;i<=n;i++){
        int el = 0;
        cin >> el;
        if(el==1){
            s1.push(i);
            continue;
        } else if(el==2){
            s2.push(i);
        } else if(el==3){
            s3.push(i);
        }
    }
    int el1,el2,el3 ;
    int temp = min(s1.size() , min(s2.size() , s3.size()));
    if(temp!=0) cout << temp << endl;
    
    while(!s1.empty() && !s2.empty() && !s3.empty()){
        flag = 1;
        el1 = s1.top();
        el2 = s2.top();
        el3 = s3.top();
        cout << el1 << " " << el2 << " "<<el3 <<endl;
        s1.pop(); s2.pop(); s3.pop();
    }
    if(flag==0) cout << "0"<<endl;
    return 0;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<;
    // }
}