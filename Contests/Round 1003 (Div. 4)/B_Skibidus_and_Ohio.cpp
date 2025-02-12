#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag = 0;
        for(size_t i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cout<<1<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==1)
            continue;
        cout<<s.length()<<endl;
    }
}