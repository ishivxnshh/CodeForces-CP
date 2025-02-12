#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y;
        cin>>x>>y;
        int difference = x + 1 - y;
        cout << (difference>=0 && difference%9==0 ? "yes" : "no")<<endl;
    }
}