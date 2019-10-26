#include<iostream>
#define ll long int
using namespace std;

int main(){
    ll n,k,l,c,d,p,nl,np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    ll totalDrinks = k*l, totalLimes = c*d;
    ll q1 = totalDrinks/nl , q2 = totalLimes , q3 = p/np;
    ll ans = min(q1,min(q2,q3))/n;
    cout << ans <<endl;

}
