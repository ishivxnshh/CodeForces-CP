#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#include <iostream>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, d = 0;
    f(i, n)
    {
        if(s[i] == 'A')
            a++;
        else
            d++;
    }
    if(a > d)
        cout << "Anton" << nline;
    else if(a < d)
        cout <<  "Danik" << nline;
    else
        cout << "Friendship" << nline;
}