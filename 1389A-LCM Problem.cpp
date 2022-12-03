#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
 
 
 
int main()
{
     ll t,a,b;
     cin>>t;
     while(t--)
     {
         cin>>a>>b;
         if(2*a<=b)
            cout<<a<<" "<<2*a<<endl;
         else cout<<"-1 -1"<<endl;
     }
 
 
}