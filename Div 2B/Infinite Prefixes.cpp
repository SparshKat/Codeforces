#include <iostream>
#include <bits/stdc++.h>
#include <numeric> //For gcd()
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fo(i, n) for (int i = 0; i < n; ++i)
#define foe(i, n) for (int i = 1; i <= n; ++i)
#define Fo(i, k, n) for (int i = k; i < n; ++i)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vpll vector<pair<ll, ll>>
#define MAX 1000000
#define TIME 1440
using namespace std;
using pi = pair<ll, ll>;

void prefix(ll n, ll x)
{
    map<ll, ll> m;
    string s;
    cin >> s;
    ll dp[n + 1];
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (s[i - 1] == '1')
        {
            dp[i] = dp[i - 1] - 1;
        }
        else if (s[i - 1] == '0')
        {
            dp[i] = dp[i - 1] + 1;
        }
        m[dp[i]]++;
    }
    if (dp[n] == 0)
    {
        if (m.count(x))
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        return;
    }
    ll ans = 0;
    if (dp[n] > 0)
    {
        fo(i, n)
        {
            if ((x - dp[i]) % dp[n] == 0 && x >= dp[i])
                {
                    ans++;
                }
        }
    }
    else
    {
        fo(i,n)
        {
            if ((dp[i] - x) % dp[n] == 0 && x <= dp[i])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        prefix(n, x);
    }
}