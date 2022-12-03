#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
int main()
{
    ll t,i,j,k,c1,c2;
    cin>>t;
    string s;
 
    while(t--)
    {
        map<char,ll> m;
        cin>>s;
 
        for(i=0; i<s.size(); i++)
            m[s[i]]++;
 
        c1=c2=0;
 
        for(auto it:m)
        {
            if(it.second==1)
                c1++;
            else c2++;
        }
 
       // cout<<"C1="<<c1<<"c2= "<<c2<<endl;
       cout<<(c2 + c1 / 2) <<endl;
    }
 
}