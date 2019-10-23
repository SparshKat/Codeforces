#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

int team(int n, int k)
{
    if (n < 3) return 0;
    if (k > 5) return 0;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int temp = 2;
    while(temp<n){
        if(v[temp]+k <= 5){
            count++;
            temp+=3;
        }else {
            break;
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int temp = team(n, k);
    cout << temp << endl;
    return 0;
}