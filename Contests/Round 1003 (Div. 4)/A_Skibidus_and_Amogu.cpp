#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string Z;
        cin>>Z;
        if(Z=="us")
        {
            cout<<"i"<<endl;
            continue;
        }
        int n=Z.size();
        if (n>=2 && Z.substr(n-2)=="us") 
        {
            Z=Z.substr(0,n-2)+"i";
        }
        cout<<Z<< endl;
    }
}