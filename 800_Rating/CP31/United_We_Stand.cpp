#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define nline '\n'
#define yes cout << "YES\n" #define no cout << "NO\n"
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mpp;
    f(i, n)
    {
        ll b;
        cin >> b;
        mpp[b]++;
    }
    if (mpp.size() == 1)
        cout << -1 << nline;
    else
    {
        ll min_ele = mpp.begin() -> first;
        ll min_fre = mpp.begin() -> second;
        cout << min_fre << " " << n - min_fre << nline;
        f(i, min_fre)
            cout << min_ele << " ";
        cout << nline;
        mpp.erase(min_ele);
        for(auto [e, f] : mpp)
            f(i, f)
                cout << e << " ";
        cout << nline;
    }
}

int main()
{
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}