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
#define yes cout << "YES\n"
#define no cout << "NO\n"
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[0][i]);
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[n - 1][i]);
    }
    vector<int> vec(s.begin(), s.end());
    reverse(vec.begin(), vec.end());
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << (2 * n * (2 * n + 1)) / 2 - sum << " ";
    f(i, n-1){
      cout << arr[0][i] << " ";
    }
    f(i, n){
      cout << arr[n-1][i] << " ";
    }
    cout << nline;
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