#include<iostream>
using namespace std;

void swapchar(string &s , int i , int j){
    char ch = s[i];
    s[i] = s[j] ;
    s[j] = ch ;
    return ;
}

int main(){
    int n , t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t>0){
        int i=0, j;
        while(i<n){
            if(s[i] == 'B' && s[i+1] =='G'){
                j = i+1 ;
                while(j<n){
                    if(s[j] == 'G'){
                        swapchar(s,i,j);
                        i = j+1;
                        break;
                    }
                    j++;
                }
                continue;
            }
            i++;
        }
        t--;
    }
    cout << s <<endl;
    return 0;
}