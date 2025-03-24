#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        long long b;
        cin >> b;
        if(b == 0)
        {
            a = 0;
            break;
        }
        else
            a = min(a, abs(b));
    }
    cout << a << endl;
}