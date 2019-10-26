#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int main(){
    ll a, b , p1=0, draw=0, p2 =0;
    cin >> a >> b;
    for(int i=1;i<=6;i++){
        p1+=abs(a-i)<abs(b-i);
        draw += abs(a-i)==abs(b-i);
        p2+= abs(a-i)>abs(b-i);
    }
    cout << p1 <<" " << draw <<" "<< p2<<endl;
    return 0;
}
