#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) //n
            cin >> vec[i];
        vector<long long> copy_a = vec; //n
        sort(copy_a.begin(), copy_a.end()); //nlogn
        if (copy_a == vec || k > 1) //n
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

//tc - O(nlog2n) - O(100log(100)) = 100*7 = 700
//sc - O(n) - O(100) = 100