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
    ll n, h;
    cin >> n >> h;
    iv(a, n);
    ll count = 0;
    f(i, n)
    {
        if (a[i] > h)
            count += 2;
        else
            count += 1;
    }
    cout << count << nline;
    return 0;
}