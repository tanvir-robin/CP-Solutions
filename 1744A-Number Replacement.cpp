#include<bits/stdc++.h>
using namespace std;
typedef long long llng;
int main()
{    llng n,t,i,tmp;
    char ch;
    cin>>t;
    while(t--)
    {cin>>n;
        vector<llng> v;
        map<llng,char> mp;
        bool chek=1;
        string s;
        while(n--)
        {
            cin>>tmp;
            v.push_back(tmp);
        }
        cin>>s;
 
        for(i=0; i<v.size(); ++i)
        {
 
            if(mp[v[i]]=='\0')
            {
                mp[v[i]]=s[i];
            }
            else
            {
                if(mp[v[i]]!=s[i])
                {
                    chek=0;
                }
            }
        }
 
        if(chek)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 
 
}
 